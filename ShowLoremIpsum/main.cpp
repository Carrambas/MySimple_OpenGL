#include <iostream>
#include <windows.h> // заголовочный файл для Windows
// GLEW
#define GLEW_STATIC
#include <glew.h>

// GLFW
#include <glfw3.h>
#include <Camera.h>

#include "letters.h"

// GLM Mathematics
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Shader.h"

// Function prototypes
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode);
void mouse_callback(GLFWwindow* window, double xpos, double ypos);
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
void do_movement();
void ModelBulding(GLfloat *vertices,float *points,int *qpoints,float *normal,float size,float posX,float posY,float posZ);
void RecordText(char *str);

const GLuint WIDTH = 800, HEIGHT = 600;


 static Camera camera(glm::vec3(0.0f, 0.0f, 1.5f));//camera object and its initial position

 static bool keys[1024];//array of keystrokes

// Light attributes
static glm::vec3 lightPos(-0.1f, 0.0f, 0.5f);//light position

static GLfloat lastX =  WIDTH  / 2.0;//X window application center
static  GLfloat lastY =  HEIGHT / 2.0;//Y window application center

static bool firstMouse = true;

 static GLfloat deltaTime = 0.0f;	// // Time between current frame and last frame
static GLfloat lastFrame = 0.0f;  	// Time of last frame


static GLfloat vertices[4000];//common mass of vertices and normals
static GLfloat *ver = vertices; //point to array

 static int Iv=0;// temporary variable for the common array




// The MAIN function, from here we start the application and run the game loop
int main()
{

    // Init GLFW
    glfwInit();
    // Set all the required options for GLFW
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);


   // Create a GLFWwindow object that we can use for GLFW's functions
   GLFWwindow* window = glfwCreateWindow(WIDTH, HEIGHT, "ShowLoremIpsum", nullptr, nullptr);
   glfwMakeContextCurrent(window);

   // Set the required callback functions
   glfwSetKeyCallback(window, key_callback);
   glfwSetCursorPosCallback(window, mouse_callback);

   // GLFW Options
   glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

   // Set this to true so GLEW knows to use a modern approach to retrieving function pointers and extensions
   glewExperimental = GL_TRUE;

   // Initialize GLEW to setup the OpenGL Function pointers
   glewInit();

   // Define the viewport dimensions
   glViewport(0, 0, WIDTH, HEIGHT);

   glEnable(GL_DEPTH_TEST);


    ///////////////////////////////////////////////////////////////////////////////
    RecordText("Lorem Ipsum");// Writing text that will be displayed on the screen
    ///////////////////////////////////////////////////////////////////////////////


    // Build and compile our shader program
    Shader ourShader("C:/QProg/ShowLoremIpsum/shader.vert","C:/QProg/ShowLoremIpsum/shader.frag");// что бы компилировались шейдеры нужно копировать папку QProg на диск C либо изменить путь .

    // Setup OpenGL options
    glEnable(GL_DEPTH_TEST);

    // Set up vertex data (and buffer(s)) and attribute pointers
    GLuint VBO, VAO;
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
    // Bind the Vertex Array Object first, then bind and set vertex buffer(s) and attribute pointer(s).
    glBindVertexArray(VAO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices),vertices , GL_STATIC_DRAW);

    // Position attribute
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)0);
    glEnableVertexAttribArray(0);
    // Color attribute
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(GLfloat), (GLvoid*)(3 * sizeof(GLfloat)));
    glEnableVertexAttribArray(1);

    glBindVertexArray(0); // Unbind VAO



    // Game loop
    while (!glfwWindowShouldClose(window))
    {

 // Calculate deltatime of current frame
 GLfloat currentFrame = glfwGetTime();
 deltaTime = currentFrame - lastFrame;
 lastFrame = currentFrame;

 // Check if any events have been activiated (key pressed, mouse moved etc.) and call corresponding response functions
 glfwPollEvents();
 do_movement();
 // Render
 // Clear the colorbuffer
 glClearColor(0.1f, 0.1f, 0.1f, 1.0f);
 glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

 // Draw the text
 ourShader.Use();

 // Create transformations
  glm::mat4 model(1.0f);

 // Camera/View transformation
 glm::mat4 view(1.0f);
  view = camera.GetViewMatrix();

  // Projection
  glm::mat4 projection(1.0f);
  projection = glm::perspective(camera.Zoom, (float)WIDTH/(float)HEIGHT, 0.1f, 1000.0f);

                      // Get the uniform locations
  GLint modelLoc = glGetUniformLocation(ourShader.Program,"model");
  GLint viewLoc = glGetUniformLocation(ourShader.Program, "view");
  GLint projLoc = glGetUniformLocation(ourShader.Program, "projection");
  GLint lightPosLoc = glGetUniformLocation(ourShader.Program, "lightPos");
  GLint objectColorLoc = glGetUniformLocation(ourShader.Program, "objectColor");
  GLint lightColorLoc  = glGetUniformLocation(ourShader.Program, "lightColor");

                      // Pass the matrices and light to the shader
  glUniformMatrix4fv(viewLoc, 1, GL_FALSE, glm::value_ptr(view));
  glUniformMatrix4fv(projLoc, 1, GL_FALSE, glm::value_ptr(projection));
  glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
  glUniform3f(lightPosLoc, lightPos.x, lightPos.y, lightPos.z);
  glUniform3f(objectColorLoc, 1.0f, 0.5f, 0.31f);
  glUniform3f(lightColorLoc,  1.0f, 1.0f, 1.0f);





        glBindVertexArray(VAO);
        glDrawArrays(GL_TRIANGLES, 0,sizeof(vertices));
        glBindVertexArray(0);

        // Swap the screen buffers
        glfwSwapBuffers(window);
    }

    // Properly de-allocate all resources once they've outlived their purpose
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    // Terminate GLFW, clearing any resources allocated by GLFW.
    glfwTerminate();
    return 0;
}

// Is called whenever a key is pressed/released via GLFW
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode)
{

     if(key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
     glfwSetWindowShouldClose(window, GL_TRUE);
     if (key >= 0 && key < 1024)
     {
     if(action == GLFW_PRESS)
      keys[key] = true;
      else if(action == GLFW_RELEASE)
     keys[key] = false;
      }
}

void do_movement()
{

    // Camera controls
    if(keys[GLFW_KEY_W]||keys[GLFW_KEY_UP])
           camera.ProcessKeyboard(FORWARD, deltaTime);
       if(keys[GLFW_KEY_S]||keys[GLFW_KEY_DOWN])
           camera.ProcessKeyboard(BACKWARD, deltaTime);
       if(keys[GLFW_KEY_A]||keys[GLFW_KEY_LEFT])
           camera.ProcessKeyboard(LEFT, deltaTime);
       if(keys[GLFW_KEY_D]||keys[GLFW_KEY_RIGHT])
           camera.ProcessKeyboard(RIGHT, deltaTime);
}

void mouse_callback(GLFWwindow* window, double xpos, double ypos)
{
    if(firstMouse)
       {
           lastX = xpos;
           lastY = ypos;
           firstMouse = false;
       }

       GLfloat xoffset = xpos - lastX;
       GLfloat yoffset = lastY - ypos;  // Reversed since y-coordinates go from bottom to left

       lastX = xpos;
       lastY = ypos;

       camera.ProcessMouseMovement(xoffset, yoffset);
}


//writing the coordinates and normals of a character to a massive array
void ModelBulding(GLfloat *vertices,float *points,int *qpoints,float *normal,float size,float posX,float posY,float posZ)
{
std:: cout << "Bulding_L \n";
    float ix=0;//
    float iy=0;//Local coordinates of the model
    float iz=0;//

    float PX=0;//
    float PY=0;//Global coordinates of the model
    float PZ=0;//

    int col = 0;//temporary variable to copy normal
    int Shp =0;//time variable for counting the processed points

int maxpoint = *qpoints ;//the number of coordinates of points and normals in the model
std:: cout << "points"<<maxpoint;

  for (int i = 0; Shp < maxpoint ; i++){
    // getting coordinates from points
      std:: cout <<"\n" << "Copy from model array";
    ix = points[Shp];
    Shp++;
     iy = points[Shp];
    Shp++;
    iz = points[Shp];
    Shp++;

std:: cout <<"\n" << "Getting coordinates";
    //calculation of the global position of the model
    PX = size * (posX + ix);
    PY = size * (posY + iy);
    PZ = size * (posZ + iz);
std:: cout <<"\n" <<"Rashitali pos";
    //copying model coordinates into a common array
    vertices[Iv] = PX;
    Iv++;
    vertices[Iv] = PY;
    Iv++;
    vertices[Iv] = PZ;
    Iv++;
std:: cout <<"\n" <<"copy from model coordinate array";
    //copy object normal to common array
     col = 0;
    while(col < 3)
    {
        vertices[Iv] = normal[col];
        Iv++;
        col++;
    }
    std:: cout <<"\n" <<"copy model normal to common array ";
std::cout << "\n  " << Iv <<"   total array size";
}
};





void  RecordText(char *str)    //writing a string to a common array


{
int strmax = strlen(str);// line length
float shift = 0.3f;//indent between letters
float posX=0.0f;//
float posY=0.0f;//global coordinates of the beginning of the line
float posZ=0.0f;//
posX-=((0.2f*strmax)+((shift-0.2f)*(strmax-1)))/2;//Middle alignment
std:: cout << strmax << "\n";//line length
for(int i=0;i<strmax;i++){
    switch (str[i]) {
    case 'L':
    {
        letterL L1;


        ModelBulding(ver,L1.verticle,&L1.qpoints,L1.normal,L1.size,posX,posY,posZ);//копирование цвета и координат точек в общий массив

        break;
    }
    case 'o':
    {
        lettero o1;


        ModelBulding(ver,o1.verticle,&o1.qpoints,o1.normal,o1.size,posX,posY,posZ);//копирование цвета и координат точек в общий массив

        break;
    }
    case 'e':
    {
        lettere e1;


        ModelBulding(ver,e1.verticle,&e1.qpoints,e1.normal,e1.size,posX,posY,posZ);//копирование цвета и координат точек в общий массив

        break;
    }
         case ' ':
        {
             std:: cout << "space";

            break;
}
    case 'I':
    {
        letterI I1;


        ModelBulding(ver,I1.verticle,&I1.qpoints,I1.normal,I1.size,posX,posY,posZ);//копирование нормали и координат точек в общий массив

        break;
    }
    case 'm':
    {
        letterm m1;


        ModelBulding(ver,m1.verticle,&m1.qpoints,m1.normal,m1.size,posX,posY,posZ);//копирование нормали и координат точек в общий массив

        break;
    }
    case 'r':
    {
        letterr r1;


        ModelBulding(ver,r1.verticle,&r1.qpoints,r1.normal,r1.size,posX,posY,posZ);//копирование нормали и координат точек в общий массив

        break;
    }
    case 'p':
    {
        letterp p1;


        ModelBulding(ver,p1.verticle,&p1.qpoints,p1.normal,p1.size,posX,posY,posZ);//копирование нормали и координат точек в общий массив

        break;
    }
    case 's':
    {
        letters s1;


        ModelBulding(ver,s1.verticle,&s1.qpoints,s1.normal,s1.size,posX,posY,posZ);//копирование нормали и координат точек в общий массив

        break;
    }
    case 'u':
    {
        letteru u1;


        ModelBulding(ver,u1.verticle,&u1.qpoints,u1.normal,u1.size,posX,posY,posZ);//копирование нормали и координат точек в общий массив

        break;
    }
    default://if unknown character
    {
       std:: cout << "non sim";
       Inexplicit Inexp;
        ModelBulding(ver,Inexp.verticle,&Inexp.qpoints,Inexp.normal,Inexp.size,posX,posY,posZ);//копирование нормали и координат точек в общий массив
        }

    }
    posX += shift;//indent
}

}


