#ifndef LETTERS_H
#define LETTERS_H
class letterL{
public:
float size;
 float positionX;
 float positionY;
 float positionZ;
 float *normal = new float[3]{0.0f,0.0f,1.0f};  // normal
 float *verticle = new float[250]{ //object local coordinates
         // Positions
         -0.1f,  0.2f, 0.0f,   //A
           -0.05f, 0.2f, 0.0f,    //B
           -0.1f, - 0.2f, 0.0f,   //C

            -0.05f, 0.2f, 0.0f,   //B
           -0.1f, - 0.2f, 0.0f,   //C
          -0.05f,-0.2f,0.0f, //G

           -0.05f, -0.15f, 0.0f,  //F
            0.1f, -0.15f, 0.0f,  //E
            -0.05f,-0.2f,0.0f, //G

           -0.05f,-0.2f,0.0f,
           0.1f, -0.15f, 0.0f, //E
           0.1f, -0.2f, 0.0f,    //D
 };
int qpoints = 72;//amount of points
    letterL(){
   size = 0.5f;
   positionX = 0;
   positionY = 0;
   positionZ = 0;
    }
    ~letterL(){
        delete[] normal;
        delete[] verticle;
    }

};

class lettero{
public:
float size;
 float positionX;
 float positionY;
 float positionZ;
 float *normal = new float[3]{0.0f,0.0f,1.0f};  // normal
 float *verticle = new float[288]{ //object local coordinates
         // Positions
       //   0.0f,  0.1f, 0.0f,//A
      //    0.0f, 0.0625f, 0.0f,//A2
      //    0.1f,  -0.05f, 0.0f,//B
      //    0.05f,  -0.05f, 0.0f,//B2
       //   0.0f, - 0.2f, 0.0f,//C
       //   0.0f,-0.1625f,0.0f,//C2
       //   -0.1f,-0.05f,0.0f,//D
      //    -0.05f,-0.05f,0.0f,//D2

      //     0.05f,  0.0875f, 0.0f, //1
       //    0.06875f,  0.075f, 0.0f,//2
       //    0.0875f,  0.05f, 0.0f,//3
      //     0.021875f,  0.059375f, 0.0f,//7
       //    0.0375f,  0.0375f, 0.0f,//9
      //     0.03125f,  0.05f, 0.0f,//8

         // 0.0375f,  -0.1375f, 0.0f,//12
         // 0.0875f,  -0.15f, 0.0f,//4
         // 0.03125f, - 0.15f, 0.0f,//13
         // 0.06875f,  -0.175f, 0.0f,//5
         // 0.021875f, - 0.159375f, 0.0f,//14
         // 0.05f,  -0.1875f, 0.0f,//6


         0.0f,  0.1f, 0.0f,//A
         0.0f, 0.0625f, 0.0f,//A2
         0.05f,  0.0875f, 0.0f, //1

         0.0f, 0.0625f, 0.0f,//A2
         0.05f,  0.0875f, 0.0f, //1
         0.021875f,  0.059375f, 0.0f,//7

         0.021875f,  0.059375f, 0.0f,//7
         0.05f,  0.0875f, 0.0f, //1
         0.06875f,  0.075f, 0.0f,//2

         0.021875f,  0.059375f, 0.0f,//7
         0.06875f,  0.075f, 0.0f,//2
         0.03125f,  0.05f, 0.0f,//8

         0.03125f,  0.05f, 0.0f,//8
         0.06875f,  0.075f, 0.0f,//2
         0.0875f,  0.05f, 0.0f,//3

         0.03125f,  0.05f, 0.0f,//8
         0.0875f,  0.05f, 0.0f,//3
         0.0375f,  0.0375f, 0.0f,//9

         0.0375f,  0.0375f, 0.0f,//9
         0.0875f,  0.05f, 0.0f,//3
         0.1f,  -0.05f, 0.0f,//B

         0.0375f,  0.0375f, 0.0f,//9
         0.1f,  -0.05f, 0.0f,//B
         0.05f,  -0.05f, 0.0f,//B2

         0.05f,  -0.05f, 0.0f,//B2
         0.1f,  -0.05f, 0.0f,//B
         0.0875f,  -0.15f, 0.0f,//4

         0.05f,  -0.05f, 0.0f,//B2
         0.0375f,  -0.1375f, 0.0f,//12
         0.0875f,  -0.15f, 0.0f,//4

         0.0375f,  -0.1375f, 0.0f,//12
         0.0875f,  -0.15f, 0.0f,//4
         0.06875f,  -0.175f, 0.0f,//5

         0.0375f,  -0.1375f, 0.0f,//12
         0.06875f,  -0.175f, 0.0f,//5
         0.03125f, - 0.15f, 0.0f,//13

         0.03125f, - 0.15f, 0.0f,//13
         0.06875f,  -0.175f, 0.0f,//5
         0.05f,  -0.1875f, 0.0f,//6

         0.03125f, - 0.15f, 0.0f,//13
         0.05f,  -0.1875f, 0.0f,//6
         0.021875f, - 0.159375f, 0.0f,//14

         0.021875f, - 0.159375f, 0.0f,//14
         0.05f,  -0.1875f, 0.0f,//6
         0.0f, - 0.2f, 0.0f,//C

         0.0f,-0.1625f,0.0f,//C2
         0.0f, - 0.2f, 0.0f,//C
         0.021875f, - 0.159375f, 0.0f,//14

         //--------------------------------

         0.0f,  0.1f, 0.0f,//A
         0.0f, 0.0625f, 0.0f,//A2
        - 0.05f,  0.0875f, 0.0f, //1

         0.0f, 0.0625f, 0.0f,//A2
        - 0.05f,  0.0875f, 0.0f, //1
         -0.021875f,  0.059375f, 0.0f,//7

         -0.021875f,  0.059375f, 0.0f,//7
         -0.05f,  0.0875f, 0.0f, //1
         -0.06875f,  0.075f, 0.0f,//2

         -0.021875f,  0.059375f, 0.0f,//7
         -0.06875f,  0.075f, 0.0f,//2
         -0.03125f,  0.05f, 0.0f,//8

         -0.03125f,  0.05f, 0.0f,//8
         -0.06875f,  0.075f, 0.0f,//2
         -0.0875f,  0.05f, 0.0f,//3

         -0.03125f,  0.05f, 0.0f,//8
         -0.0875f,  0.05f, 0.0f,//3
         -0.0375f,  0.0375f, 0.0f,//9

         -0.0375f,  0.0375f, 0.0f,//9
         -0.0875f,  0.05f, 0.0f,//3
         -0.1f,  -0.05f, 0.0f,//B

         -0.0375f,  0.0375f, 0.0f,//9
         -0.1f,  -0.05f, 0.0f,//B
         -0.05f,  -0.05f, 0.0f,//B2

        - 0.05f,  -0.05f, 0.0f,//B2
        - 0.1f,  -0.05f, 0.0f,//B
         -0.0875f,  -0.15f, 0.0f,//4

        - 0.05f,  -0.05f, 0.0f,//B2
         -0.0375f,  -0.1375f, 0.0f,//12
         -0.0875f,  -0.15f, 0.0f,//4

         -0.0375f,  -0.1375f, 0.0f,//12
         -0.0875f,  -0.15f, 0.0f,//4
         -0.06875f,  -0.175f, 0.0f,//5

         -0.0375f,  -0.1375f, 0.0f,//12
         -0.06875f,  -0.175f, 0.0f,//5
         -0.03125f, - 0.15f, 0.0f,//13

         -0.03125f, - 0.15f, 0.0f,//13
         -0.06875f,  -0.175f, 0.0f,//5
         -0.05f,  -0.1875f, 0.0f,//6

         -0.03125f, - 0.15f, 0.0f,//13
         -0.05f,  -0.1875f, 0.0f,//6
         -0.021875f, - 0.159375f, 0.0f,//14

         -0.021875f, - 0.159375f, 0.0f,//14
         -0.05f,  -0.1875f, 0.0f,//6
         0.0f, - 0.2f, 0.0f,//C

         0.0f,-0.1625f,0.0f,//C2
         0.0f, - 0.2f, 0.0f,//C
         -0.021875f, - 0.159375f, 0.0f//14

 };
int qpoints = 288;//amount of points
    lettero(){
   size = 0.5f;
   positionX = 0;
   positionY = 0;
   positionZ = 0;
    }
    ~lettero(){
        delete[] normal;
        delete[] verticle;
    }

};



class Inexplicit{ //object local coordinates
public:
float size;
 float positionX;
 float positionY;
 float positionZ;
 float *normal = new float[3]{0.0f,0.0f,1.0f};  // normal
 float *verticle = new float[250]{ //object local coordinates
         // Positions
          0.0f,  0.2f, 0.0f,
          0.1f, 0.0f, 0.0f,
          -0.1f,  0.0f, 0.0f,

          -0.1f,  0.0f, 0.0f,
          0.1f, - 0.0f, 0.0f,
          0.0f,-0.2f,0.0f,


 };
int qpoints = 18;//amount of points
    Inexplicit(){
   size = 0.5f;
   positionX = 0;
   positionY = 0;
   positionZ = 0;
    }
    ~Inexplicit(){
        delete[] normal;
        delete[] verticle;
    }

};


class letterI{ //object local coordinates
public:
float size;
 float positionX;
 float positionY;
 float positionZ;
 float *normal = new float[3]{0.0f,0.0f,1.0f};  // normal
 float *verticle = new float[18]{ //object local coordinates

//-0.05f,  0.2f, 0.0f,   //A
  //-0.05f, -0.2f, 0.0f,    //B
           //0.05f, -0.2f, 0.0f,    //C
           //0.05f, 0.2f, 0.0f,    //D
         -0.025f,  0.2f, 0.0f,   //A
         -0.025f, -0.2f, 0.0f,    //B
         0.025f, -0.2f, 0.0f,    //C

         0.025f, -0.2f, 0.0f,    //C
         -0.025f,  0.2f, 0.0f,   //A
         0.025f, 0.2f, 0.0f,    //D

 };
int qpoints = 18;//amount of points
    letterI(){
   size = 0.5f;
   positionX = 0;
   positionY = 0;
   positionZ = 0;
    }
    ~letterI(){
        delete[] normal;
        delete[] verticle;
    }

};

class letterm{
public:
float size;
 float positionX;
 float positionY;
 float positionZ;
 float *normal = new float[3]{0.0f,0.0f,1.0f};  // normal
 float *verticle = new float[207]{ //object local coordinates


//-0.15f,  0.1f, 0.0f,   //1
//-0.15f,  -0.2f, 0.0f,    //2
//-0.1f,0.1f, 0.0f,    //3

//-0.1f,  -0.2f, 0.0f,    //4
//-0.1f,-0.0f, 0.0f,    //5
//-0.1f, 0.075f, 0.0f,    //6

//-0.0875f,   0.025f, 0.0f,   //7
//-0.0625f,  0.1f, 0.0f,    //8
//-0.0625f, 0.04375f, 0.0f,    //9

//-0.0375f, 0.025f, 0.0f,    //10
//-0.025f, 0.075f, 0.0f,    //11
//-0.025f,0.0f, 0.0f,    //12

//0.0f,   0.05f, 0.0f,   //13
//0.025f,  0.0f, 0.0f,    //14
//0.025f,0.075f, 0.0f,    //15

//0.0375f,  0.025f, 0.0f,    //16
//0.0625f, 0.04375f, 0.0f,    //17
//0.0625f, 0.1f, 0.0f,    //18

 //  0.1125f,  0.075f, 0.0f,   //19
 //   0.0875f,  0.025f, 0.0f,    //20
 //   0.15f,0.04375f, 0.0f,    //21

 //   0.1f,  0.0f, 0.0f,    //22
 //    0.15f,0.0f, 0.0f,    //23
 //    -0.025f, -0.2f, 0.0f,    //24

  //    0.025f,   -0.2f, 0.0f,   //25
  //     0.1f,  -0.2f, 0.0f,    //26
 //     0.15f, -0.2f, 0.0f,    //27

-0.15f,  0.1f, 0.0f,   //1
-0.15f,  -0.2f, 0.0f,    //2
-0.1f,  -0.2f, 0.0f,    //4

-0.15f,  0.1f, 0.0f,   //1
-0.1f,0.1f, 0.0f,    //3
-0.1f,  -0.2f, 0.0f,    //4

-0.1f, 0.075f, 0.0f,    //6
-0.1f,-0.0f, 0.0f,    //5
-0.0875f,   0.025f, 0.0f,   //7


-0.1f, 0.075f, 0.0f,    //6
-0.0625f,  0.1f, 0.0f,    //8
-0.0875f,   0.025f, 0.0f,   //7

-0.0625f,  0.1f, 0.0f,    //8
-0.0875f,   0.025f, 0.0f,   //7
-0.0625f, 0.04375f, 0.0f,    //9

-0.0625f,  0.1f, 0.0f,    //8
-0.025f, 0.075f, 0.0f,    //11
-0.0625f, 0.04375f, 0.0f,    //9



-0.0625f, 0.04375f, 0.0f,    //9
-0.0375f, 0.025f, 0.0f,    //10
-0.025f, 0.075f, 0.0f,    //11

-0.0375f, 0.025f, 0.0f,    //10
-0.025f, 0.075f, 0.0f,    //11
-0.025f,0.0f, 0.0f,    //12

-0.025f, 0.075f, 0.0f,    //11
 -0.025f,0.0f, 0.0f,    //12
0.0f,   0.05f, 0.0f,   //13

 0.0f,   0.05f, 0.0f,   //13
-0.025f,0.0f, 0.0f,    //12
 0.025f,  0.0f, 0.0f,    //14


-0.025f,0.0f, 0.0f,    //12
-0.025f, -0.2f, 0.0f,    //24
 0.025f,   -0.2f, 0.0f,   //25

 -0.025f,0.0f, 0.0f,    //12
 0.025f,  0.0f, 0.0f,    //14
 0.025f,   -0.2f, 0.0f,   //25


0.0f,   0.05f, 0.0f,   //13
0.025f,0.075f, 0.0f,    //15
0.025f,  0.0f, 0.0f,    //14



0.025f,0.075f, 0.0f,    //15
0.025f,  0.0f, 0.0f,    //14
0.0375f,  0.025f, 0.0f,    //16

0.025f,0.075f, 0.0f,    //15
0.0625f, 0.04375f, 0.0f,    //17
0.0375f,  0.025f, 0.0f,    //16

0.025f,0.075f, 0.0f,    //15
0.0625f, 0.04375f, 0.0f,    //17
0.0625f, 0.1f, 0.0f,    //18

0.0625f, 0.04375f, 0.0f,    //17
0.0625f, 0.1f, 0.0f,    //18
0.0875f,  0.025f, 0.0f,    //20

 0.0625f, 0.1f, 0.0f,    //18
 0.0875f,  0.025f, 0.0f,    //20
0.1125f,  0.075f, 0.0f,   //19

0.1125f,  0.075f, 0.0f,   //19
0.0875f,  0.025f, 0.0f,    //20
0.15f,0.04375f, 0.0f,    //21


0.0875f,  0.025f, 0.0f,    //20
 0.15f,0.04375f, 0.0f,    //21
 0.1f,  0.0f, 0.0f,    //22

 0.1f,  0.0f, 0.0f,    //22
 0.15f,0.04375f, 0.0f,    //21
 0.15f,0.0f, 0.0f,    //23

 0.1f,  0.0f, 0.0f,    //22
 0.1f,  -0.2f, 0.0f,    //26
 0.15f, -0.2f, 0.0f,    //27

0.1f,  0.0f, 0.0f,    //22
0.15f,0.0f, 0.0f,    //23
 0.15f, -0.2f, 0.0f,    //27



 };
int qpoints = 207;//amount of points
    letterm(){
   size = 0.5f;
   positionX = 0;
   positionY = 0;
   positionZ = 0;
    }
    ~letterm(){
        delete[] normal;
        delete[] verticle;
    }

};

class letterr{
public:
float size;
 float positionX;
 float positionY;
 float positionZ;
 float *normal = new float[3]{0.0f,0.0f,1.0f};  // normal
 float *verticle = new float[54]{ //object local coordinates

//-0.05f,  0.1f, 0.0f,   //A
 //0.0f, 0.1f, 0.0f,    //B
 //0.0f, 0.075f, 0.0f,    //C
  //0.025f, 0.0875f, 0.0f,    //D
  //0.075f,  0.1f, 0.0f,   //E
  //0.075f, 0.05f, 0.0f,    //F
  //0.0375f, 0.0375f, 0.0f,    //G
   //0.0f, 0.0f, 0.0f,    //H
  //0.0f,  -0.2f, 0.0f,   //I
  //-0.05f, -0.2f, 0.0f,    //J

        -0.05f,  0.1f, 0.0f,   //A
         -0.05f, -0.2f, 0.0f,    //J
         0.0f,  -0.2f, 0.0f,   //I

        -0.05f,  0.1f, 0.0f,   //A
         0.0f,  -0.2f, 0.0f,   //I
         0.0f, 0.1f, 0.0f,    //B

         0.0f, 0.075f, 0.0f, //C
         0.0f, 0.0f, 0.0f,    //H
         0.0375f, 0.0375f, 0.0f,//G

         0.0375f, 0.0375f, 0.0f, //G
         0.0f, 0.075f, 0.0f,    //C
         0.025f, 0.0875f, 0.0f,  //D

         0.025f, 0.0875f, 0.0f,   //D
         0.0375f, 0.0375f, 0.0f,  //G
         0.075f, 0.05f, 0.0f,    //F

         0.075f, 0.05f, 0.0f,    //F
         0.025f, 0.0875f, 0.0f,   //D
         0.075f,  0.1f, 0.0f,   //E





 };
int qpoints = 54;
    letterr(){
   size = 0.5f;
   positionX = 0;
   positionY = 0;
   positionZ = 0;
    }
    ~letterr(){
        delete[] normal;
        delete[] verticle;
    }

};

class lettere{
public:
float size;
 float positionX;
 float positionY;
 float positionZ;
 float *normal = new float[3]{0.0f,0.0f,1.0f};  // normal
 float *verticle = new float[252]{ //object local coordinates
         // Positions
       //   0.0f,  0.1f, 0.0f,//1
      //    0.0f, 0.0625f, 0.0f,//2
      //    0.05f,  0.0875f, 0.0f,//3
      //    0.025f,  0.05625f, 0.0f,//4
       //   0.075f,  0.0625f, 0.0f,//5
       //   0.0375f,0.0375f,0.0f,//6
       //   0.05f,-0.0125f,0.0f,//7
      //    0.05f,-0.05f,0.0f,//8

      //     0.1f,  -0.05f, 0.0f, //9
       //    0.05f,  -0.1f, 0.0f,//10
       //    0.09375f,  -0.10625f, 0.0f,//11
      //     0.0375f,  -0.1375f, 0.0f,//12
       //    0.075f,  -0.1625f, 0.0f,//13
      //     0.025f,  -0.15625f, 0.0f,//14
         // 0.05f,  -0.1875f, 0.0f,//15
         // 0.0f,  -0.2f, 0.0f,//16
         // 0.0f, - 0.1625f, 0.0f,//17
         // -0.05f,  -0.1875f, 0.0f,//18
         // -0.025f, - 0.15625f, 0.0f,//19
         // -0.075f,  -0.1625f, 0.0f,//20
        //   - 0.05f, -0.1f, 0.0f,//22
        //    -0.1f,  -0.05f, 0.0f,//23
        //    -0.05f,  -0.05f, 0.0f,//24
         //   -0.05f, - 0.0125f, 0.0f,//25
         //   -0.0375f,-0.0375f,0.0f,//26
         //   -0.075f,0.0625f,0.0f,//27
        //    -0.025f,0.05625f,0.0f,//28
        //  -0.05f,  0.0875f, 0.0f, //29


 0.05f,  -0.1f, 0.0f,//10
 0.09375f,  -0.10625f, 0.0f,//11
 0.075f,  -0.1625f, 0.0f,//13

 0.05f,  -0.1f, 0.0f,//10
  0.0375f,  -0.1375f, 0.0f,//12
  0.075f,  -0.1625f, 0.0f,//13

0.0375f,  -0.1375f, 0.0f,//12
0.075f,  -0.1625f, 0.0f,//13
0.05f,  -0.1875f, 0.0f,//15

0.025f,  -0.15625f, 0.0f,//14
 0.0375f,  -0.1375f, 0.0f,//12
0.05f,  -0.1875f, 0.0f,//15

0.025f,  -0.15625f, 0.0f,//14
0.05f,  -0.1875f, 0.0f,//15
0.0f,  -0.2f, 0.0f,//16


0.0f, - 0.1625f, 0.0f,//17
0.0f,  -0.2f, 0.0f,//16
0.025f,  -0.15625f, 0.0f,//14

-0.05f,  -0.1875f, 0.0f,//18
0.0f, - 0.1625f, 0.0f,//17
0.0f,  -0.2f, 0.0f,//16

-0.05f,  -0.1875f, 0.0f,//18
0.0f, - 0.1625f, 0.0f,//17
-0.025f, - 0.15625f, 0.0f,//19



-0.05f,  -0.1875f, 0.0f,//18
 -0.025f, - 0.15625f, 0.0f,//19
 - 0.05f, -0.1f, 0.0f,//22

 -0.075f,  -0.1625f, 0.0f,//20
 -0.05f,  -0.1875f, 0.0f,//18
- 0.05f, -0.1f, 0.0f,//22

-0.1f,  -0.05f, 0.0f,//23
 - 0.05f, -0.1f, 0.0f,//22
-0.075f,  -0.1625f, 0.0f,//20

 -0.1f,  -0.05f, 0.0f,//23
 -0.05f,  -0.05f, 0.0f,//24
 - 0.05f, -0.1f, 0.0f,//22


 -0.1f,  -0.05f, 0.0f,//23
 -0.05f,  -0.05f, 0.0f,//24
-0.05f, - 0.0125f, 0.0f,//25

 -0.1f,  -0.05f, 0.0f,//23
-0.05f, - 0.0125f, 0.0f,//25
 -0.075f,0.0625f,0.0f,//27

-0.075f,0.0625f,0.0f,//27
 -0.0375f,-0.0375f,0.0f,//26
 -0.05f, - 0.0125f, 0.0f,//25

 -0.075f,0.0625f,0.0f,//27
-0.0375f,-0.0375f,0.0f,//26
 -0.025f,0.05625f,0.0f,//28

-0.075f,0.0625f,0.0f,//27
 -0.025f,0.05625f,0.0f,//28
-0.05f,  0.0875f, 0.0f, //29


-0.05f,  0.0875f, 0.0f, //29
 -0.025f,0.05625f,0.0f,//28
 0.0f, 0.0625f, 0.0f,//2



-0.05f,  0.0875f, 0.0f, //29
0.0f, 0.0625f, 0.0f,//2
0.0f,  0.1f, 0.0f,//1


         //   0.0f,  0.1f, 0.0f,//1
        //    0.0f, 0.0625f, 0.0f,//2
        //    0.05f,  0.0875f, 0.0f,//3
        //    0.025f,  0.05625f, 0.0f,//4
         //   0.075f,  0.0625f, 0.0f,//5
         //   0.0375f,0.0375f,0.0f,//6
         //   0.05f,-0.0125f,0.0f,//7
        //    0.05f,-0.05f,0.0f,//8

        //     0.1f,  -0.05f, 0.0f, //9
         //    0.05f,  -0.1f, 0.0f,//10
         //    0.09375f,  -0.10625f, 0.0f,//11
        //     0.0375f,  -0.1375f, 0.0f,//12
         //    0.075f,  -0.1625f, 0.0f,//13
        //     0.025f,  -0.15625f, 0.0f,//14
           // 0.05f,  -0.1875f, 0.0f,//15
           // 0.0f,  -0.2f, 0.0f,//16
           // 0.0f, - 0.1625f, 0.0f,//17
           // -0.05f,  -0.1875f, 0.0f,//18
           // -0.025f, - 0.15625f, 0.0f,//19
           // -0.075f,  -0.1625f, 0.0f,//20
          //   - 0.05f, -0.1f, 0.0f,//22
          //    -0.1f,  -0.05f, 0.0f,//23
          //    -0.05f,  -0.05f, 0.0f,//24
           //   -0.05f, - 0.0125f, 0.0f,//25
           //   -0.0375f,-0.0375f,0.0f,//26
           //   -0.075f,0.0625f,0.0f,//27
          //    -0.025f,0.05625f,0.0f,//28
          //  -0.05f,  0.0875f, 0.0f, //29



0.0f,  0.1f, 0.0f,//1
0.0f, 0.0625f, 0.0f,//2
 0.025f,  0.05625f, 0.0f,//4

0.0f,  0.1f, 0.0f,//1
 0.025f,  0.05625f, 0.0f,//4
0.05f,  0.0875f, 0.0f,//3

          0.05f,  0.0875f, 0.0f,//3
          0.025f,  0.05625f, 0.0f,//4
          0.0375f,0.0375f,0.0f,//6

         0.0375f,0.0375f,0.0f,//6
          0.05f,  0.0875f, 0.0f,//3
          0.075f,  0.0625f, 0.0f,//5

          0.0375f,0.0375f,0.0f,//6
          0.075f,  0.0625f, 0.0f,//5
          0.05f,-0.0125f,0.0f,//7

          0.075f,  0.0625f, 0.0f,//5
          0.05f,-0.0125f,0.0f,//7
          0.1f,  -0.05f, 0.0f, //9

         0.05f,-0.0125f,0.0f,//7
         0.05f,-0.05f,0.0f,//8
         0.1f,  -0.05f, 0.0f, //9



         -0.05f, - 0.0125f, 0.0f,//25
          0.05f,-0.0125f,0.0f,//7
          0.05f,-0.05f,0.0f,//8


          -0.05f, - 0.0125f, 0.0f,//25
          -0.05f,  -0.05f, 0.0f,//24
           0.05f,-0.05f,0.0f,//8



 };
int qpoints = 252;//amount of points

    lettere(){
   size = 0.5f;
   positionX = 0;
   positionY = 0;
   positionZ = 0;
    }
    ~lettere(){
        delete[] normal;
        delete[] verticle;
    }

};

class letterp{
public:
float size;
 float positionX;
 float positionY;
 float positionZ;
 float *normal = new float[3]{0.0f,0.0f,1.0f};  // normal
 float *verticle = new float[270]{ //object local coordinates

         // Positions
       //   0.0f,  0.1f, 0.0f,//A
      //    0.0f, 0.0625f, 0.0f,//A2
      //    0.1f,  -0.05f, 0.0f,//B
      //    0.05f,  -0.05f, 0.0f,//B2
       //   0.0f, - 0.2f, 0.0f,//C
       //   0.0f,-0.1625f,0.0f,//C2


           //     0.05f,  0.0875f, 0.0f, //1
           //     -0.05f,  0.0875f, 0.0f, //1z
           //    0.06875f,  0.075f, 0.0f,//2
           //    -0.06875f,  0.075f, 0.0f,//2z
           //    0.0875f,  0.05f, 0.0f,//3
           //     0.021875f,  0.059375f, 0.0f,//7
           //     -0.021875f,  0.059375f, 0.0f,//7z
           //    0.0375f,  0.0375f, 0.0f,//9
           //    -0.0375f,  0.0375f, 0.0f,//9z
           //     0.03125f,  0.05f, 0.0f,//8
           //     -0.03125f,  0.05f, 0.0f,//8z

         // 0.0375f,  -0.1375f, 0.0f,//12
         // -0.0375f,  -0.1375f, 0.0f,//12z
         // 0.0875f,  -0.15f, 0.0f,//4
         // 0.03125f, - 0.15f, 0.0f,//13
          // -0.03125f, - 0.15f, 0.0f,//13z
         // 0.06875f,  -0.175f, 0.0f,//5
         // -0.06875f,  -0.175f, 0.0f,//5z
         // 0.021875f, - 0.159375f, 0.0f,//14
         // -0.021875f, - 0.159375f, 0.0f,//14z
         // 0.05f,  -0.1875f, 0.0f,//6
            // -0.05f,  -0.1875f, 0.0f,//6z

             //   -0.1f,  0.1f, 0.0f,//F
            //   -0.0625f,  0.1f, 0.0f,//I
           //    -0.1f,  -0.3f, 0.0f,//G
          //    -0.0625f,  -0.3f, 0.0f,//H
         //   -0.0625f,  -0.05f, 0.0f,//L



         //     -0.0625f,  0.0f, 0.0f,//V
         //    -0.0625f,  -0.1f, -0.1f,//W


         -0.1f,  0.1f, 0.0f,//F
         -0.0625f,  0.1f, 0.0f,//I
         -0.1f,  -0.3f, 0.0f,//G


         -0.0625f,  -0.3f, 0.0f,//H
         -0.0625f,  0.1f, 0.0f,//I
         -0.1f,  -0.3f, 0.0f,//G



       -0.0625f,  0.0f, 0.0f,//V
      -0.06875f,  0.075f, 0.0f,//2z
      -0.0375f,  0.0375f, 0.0f,//9z

       -0.0375f,  0.0375f, 0.0f,//9z
        -0.06875f,  0.075f, 0.0f,//2z
          -0.03125f,  0.05f, 0.0f,//8z

         -0.06875f,  0.075f, 0.0f,//2z
           -0.03125f,  0.05f, 0.0f,//8z
           -0.05f,  0.0875f, 0.0f, //1z

         -0.03125f,  0.05f, 0.0f,//8z
         -0.05f,  0.0875f, 0.0f, //1z
          -0.021875f,  0.059375f, 0.0f,//7z

         -0.05f,  0.0875f, 0.0f, //1z
          -0.021875f,  0.059375f, 0.0f,//7z
           0.0f,  0.1f, 0.0f,//A


         -0.021875f,  0.059375f, 0.0f,//7z
          0.0f,  0.1f, 0.0f,//A
          0.0f, 0.0625f, 0.0f,//A2


         0.0f,  0.1f, 0.0f,//A
         0.0f, 0.0625f, 0.0f,//A2
          0.021875f,  0.059375f, 0.0f,//7

         0.0f,  0.1f, 0.0f,//A
          0.05f,  0.0875f, 0.0f, //1
           0.021875f,  0.059375f, 0.0f,//7

           0.05f,  0.0875f, 0.0f, //1
           0.021875f,  0.059375f, 0.0f,//7
          0.03125f,  0.05f, 0.0f,//8

         0.05f,  0.0875f, 0.0f, //1
         0.03125f,  0.05f, 0.0f,//8
         0.06875f,  0.075f, 0.0f,//2


         0.03125f,  0.05f, 0.0f,//8
         0.06875f,  0.075f, 0.0f,//2
          0.0375f,  0.0375f, 0.0f,//9

         0.06875f,  0.075f, 0.0f,//2
          0.0375f,  0.0375f, 0.0f,//9
          0.0875f,  0.05f, 0.0f,//3

          0.0375f,  0.0375f, 0.0f,//9
          0.0875f,  0.05f, 0.0f,//3
          0.1f,  -0.05f, 0.0f,//B

         0.0375f,  0.0375f, 0.0f,//9
         0.1f,  -0.05f, 0.0f,//B
         0.05f,  -0.05f, 0.0f,//B2

         0.1f,  -0.05f, 0.0f,//B
         0.05f,  -0.05f, 0.0f,//B2
         0.0375f,  -0.1375f, 0.0f,//12

         0.1f,  -0.05f, 0.0f,//B
          0.0375f,  -0.1375f, 0.0f,//12
          0.0875f,  -0.15f, 0.0f,//4

         0.0375f,  -0.1375f, 0.0f,//12
         0.0875f,  -0.15f, 0.0f,//4
         0.03125f, - 0.15f, 0.0f,//13


         0.0875f,  -0.15f, 0.0f,//4
         0.03125f, - 0.15f, 0.0f,//13
         0.06875f,  -0.175f, 0.0f,//5

         0.03125f, - 0.15f, 0.0f,//13
         0.06875f,  -0.175f, 0.0f,//5
         0.021875f, - 0.159375f, 0.0f,//14


         0.06875f,  -0.175f, 0.0f,//5
         0.021875f, - 0.159375f, 0.0f,//14
          0.05f,  -0.1875f, 0.0f,//6

         0.021875f, - 0.159375f, 0.0f,//14
         0.05f,  -0.1875f, 0.0f,//6
         0.0f, - 0.2f, 0.0f,//C


         0.0f,-0.1625f,0.0f,//C2
         0.0f, - 0.2f, 0.0f,//C
         0.021875f, - 0.159375f, 0.0f,//14


         0.0f,-0.1625f,0.0f,//C2
          0.0f, - 0.2f, 0.0f,//C
         -0.021875f, - 0.159375f, 0.0f,//14z

         0.0f, - 0.2f, 0.0f,//C
         -0.021875f, - 0.159375f, 0.0f,//14z
         -0.05f,  -0.1875f, 0.0f,//6z

         -0.021875f, - 0.159375f, 0.0f,//14z
        -0.05f,  -0.1875f, 0.0f,//6z
         -0.03125f, - 0.15f, 0.0f,//13z

         -0.05f,  -0.1875f, 0.0f,//6z
         -0.03125f, - 0.15f, 0.0f,//13z
         -0.06875f,  -0.175f, 0.0f,//5z


         -0.03125f, - 0.15f, 0.0f,//13z
         -0.06875f,  -0.175f, 0.0f,//5z
          -0.0375f,  -0.1375f, 0.0f,//12z

         -0.06875f,  -0.175f, 0.0f,//5z
         -0.0375f,  -0.1375f, 0.0f,//12z
         -0.0625f,  -0.1f, 0.0f,//W





 };
int qpoints = 270;//amount of points
    letterp(){
   size = 0.5f;
   positionX = 0;
   positionY = 0;
   positionZ = 0;
    }
    ~letterp(){
        delete[] normal;
        delete[] verticle;
    }

};


class letters{
public:
float size;
 float positionX;
 float positionY;
 float positionZ;
 float *normal = new float[3]{0.0f,0.0f,1.0f};  // normal
 float *verticle = new float[306]{ //object local coordinates

         // Positions
       //   0.0f,  0.1f, 0.0f,//A
      //    0.0f, 0.0625f, 0.0f,//A2

       //   0.0f, - 0.2f, 0.0f,//C
       //   0.0f,-0.1625f,0.0f,//C2

             //     0.05f,  0.0875f, 0.0f, //1
             //     -0.05f,  0.0875f, 0.0f, //1z
             //    0.06875f,  0.075f, 0.0f,//2
             //    -0.06875f,  0.075f, 0.0f,//2z
             //    0.0875f,  0.05f, 0.0f,//3
        //  -0.0875f,  0.05f, 0.0f,//3z
          // 0.0875f,  -0.15f, 0.0f,//4
            // -0.0875f,  -0.15f, 0.0f,//4z
         // 0.06875f,  -0.175f, 0.0f,//5
         // -0.06875f,  -0.175f, 0.0f,//5z
         // 0.05f,  -0.1875f, 0.0f,//6
            // -0.05f,  -0.1875f, 0.0f,//6z

             //     0.021875f,  0.059375f, 0.0f,//7
             //     -0.021875f,  0.059375f, 0.0f,//7z
             //    0.0375f,  0.0375f, 0.0f,//9

             //     0.03125f,  0.05f, 0.0f,//8
             //     -0.03125f,  0.05f, 0.0f,//8z


           // -0.0375f,  -0.1375f, 0.0f,//12z

           // 0.03125f, - 0.15f, 0.0f,//13
            // -0.03125f, - 0.15f, 0.0f,//13z

           // 0.021875f, - 0.159375f, 0.0f,//14
           // -0.021875f, - 0.159375f, 0.0f,//14z

   //   0.0625f,  -0.05f, 0.0f,//S1
  //   0.075f,  -0.0625f, 0.0f,//S2
  //   0.09375f,  -0.1f, 0.0f,//S3
 //   0.05f,  -0.1125f, 0.0f,//S4
 //   0.04375f,  -0.0875f, 0.0f,//S5

  //   -0.04375f,  -0.0125f, 0.0f,//S1D
 //   -0.05f,  0.0125f, 0.0f,//S2D
 //   -0.09375f,  0.0f, 0.0f,//S3D
//   -0.075f,  -0.0375f, 0.0f,//S4D
//   -0.0625f,  -0.05f, 0.0f,//S5D
 0.0875f,  0.05f, 0.0f,//3
 0.0375f,  0.0375f, 0.0f,//9
  0.06875f,  0.075f, 0.0f,//2


     0.0375f,  0.0375f, 0.0f,//9
      0.03125f,  0.05f, 0.0f,//8
      0.06875f,  0.075f, 0.0f,//2

       0.03125f,  0.05f, 0.0f,//8
        0.05f,  0.0875f, 0.0f, //1
         0.06875f,  0.075f, 0.0f,//2


         0.03125f,  0.05f, 0.0f,//8
          0.05f,  0.0875f, 0.0f, //1
 0.021875f,  0.059375f, 0.0f,//7


    0.021875f,  0.059375f, 0.0f,//7
0.0f,  0.1f, 0.0f,//A
 0.05f,  0.0875f, 0.0f, //1

0.0f,  0.1f, 0.0f,//A
0.0f, 0.0625f, 0.0f,//A2
  0.021875f,  0.059375f, 0.0f,//7

 -0.05f,  0.0875f, 0.0f, //1z
0.0f, 0.0625f, 0.0f,//A2
0.0f,  0.1f, 0.0f,//A


      -0.021875f,  0.059375f, 0.0f,//7z
         -0.05f,  0.0875f, 0.0f, //1z
        0.0f, 0.0625f, 0.0f,//A2


-0.06875f,  0.075f, 0.0f,//2z
         -0.021875f,  0.059375f, 0.0f,//7z
            -0.05f,  0.0875f, 0.0f, //1z


         -0.06875f,  0.075f, 0.0f,//2z
                  -0.021875f,  0.059375f, 0.0f,//7z
           -0.03125f,  0.05f, 0.0f,//8z


         -0.06875f,  0.075f, 0.0f,//2z
           -0.03125f,  0.05f, 0.0f,//8z
         -0.0875f,  0.05f, 0.0f,//3z


          -0.0875f,  0.05f, 0.0f,//3z
               -0.03125f,  0.05f, 0.0f,//8z
         -0.05f,  0.0125f, 0.0f,//S2D

          -0.0875f,  0.05f, 0.0f,//3z
            -0.05f,  0.0125f, 0.0f,//S2D
 -0.09375f,  0.0f, 0.0f,//S3D


         -0.05f,  0.0125f, 0.0f,//S2D
-0.09375f,  0.0f, 0.0f,//S3D
  -0.075f,  -0.0375f, 0.0f,//S4D


  -0.05f,  0.0125f, 0.0f,//S2D
  -0.075f,  -0.0375f, 0.0f,//S4D
 -0.0625f,  -0.05f, 0.0f,//S5D

  -0.05f,  0.0125f, 0.0f,//S2D
 -0.0625f,  -0.05f, 0.0f,//S5D
  -0.04375f,  -0.0125f, 0.0f,//S1D

         -0.0625f,  -0.05f, 0.0f,//S5D
          -0.04375f,  -0.0125f, 0.0f,//S1D
0.04375f,  -0.0875f, 0.0f,//S5

        -0.04375f,  -0.0125f, 0.0f,//S1D
         0.04375f,  -0.0875f, 0.0f,//S5
         0.0625f,  -0.05f, 0.0f,//S1

         0.04375f,  -0.0875f, 0.0f,//S5
         0.0625f,  -0.05f, 0.0f,//S1
   0.05f,  -0.1125f, 0.0f,//S4

         0.0625f,  -0.05f, 0.0f,//S1
   0.05f,  -0.1125f, 0.0f,//S4
 0.075f,  -0.0625f, 0.0f,//S2

          0.05f,  -0.1125f, 0.0f,//S4
        0.075f,  -0.0625f, 0.0f,//S2
 0.09375f,  -0.1f, 0.0f,//S3

           0.05f,  -0.1125f, 0.0f,//S4
          0.09375f,  -0.1f, 0.0f,//S3
         0.0875f,  -0.15f, 0.0f,//4

           0.05f,  -0.1125f, 0.0f,//S4
         0.0875f,  -0.15f, 0.0f,//4
         0.03125f, - 0.15f, 0.0f,//13

         0.0875f,  -0.15f, 0.0f,//4
         0.03125f, - 0.15f, 0.0f,//13
         0.06875f,  -0.175f, 0.0f,//5

         0.03125f, - 0.15f, 0.0f,//13
         0.06875f,  -0.175f, 0.0f,//5
         0.021875f, - 0.159375f, 0.0f,//14

         0.06875f,  -0.175f, 0.0f,//5
         0.021875f, - 0.159375f, 0.0f,//14
          0.05f,  -0.1875f, 0.0f,//6


         0.021875f, - 0.159375f, 0.0f,//14
          0.05f,  -0.1875f, 0.0f,//6
          0.0f,-0.1625f,0.0f,//C2

         0.05f,  -0.1875f, 0.0f,//6
         0.0f,-0.1625f,0.0f,//C2
         0.0f, - 0.2f, 0.0f,//C

         -0.021875f, - 0.159375f, 0.0f,//14z
         0.0f,-0.1625f,0.0f,//C2
         0.0f, - 0.2f, 0.0f,//C

          -0.021875f, - 0.159375f, 0.0f,//14z
0.0f, - 0.2f, 0.0f,//C
     -0.05f,  -0.1875f, 0.0f,//6z


        -0.03125f, - 0.15f, 0.0f,//13z
           -0.05f,  -0.1875f, 0.0f,//6z
            -0.021875f, - 0.159375f, 0.0f,//14z

          -0.06875f,  -0.175f, 0.0f,//5z
          -0.03125f, - 0.15f, 0.0f,//13z
            -0.05f,  -0.1875f, 0.0f,//6z



         -0.06875f,  -0.175f, 0.0f,//5z
         -0.03125f, - 0.15f, 0.0f,//13z
          -0.0375f,  -0.1375f, 0.0f,//12z

         -0.0875f,  -0.15f, 0.0f,//4z
   -0.0375f,  -0.1375f, 0.0f,//12z
         -0.06875f,  -0.175f, 0.0f,//5z


 };
int qpoints = 306;//amount of points
    letters(){
   size = 0.5f;
   positionX = 0;
   positionY = 0;
   positionZ = 0;
    }
    ~letters(){
        delete[] normal;
        delete[] verticle;
    }

};

class letteru{
public:
float size;
 float positionX;
 float positionY;
 float positionZ;
 float *normal = new float[3]{0.0f,0.0f,1.0f};  // normal
 float *verticle = new float[180]{ //object local coordinates
         // Positions

       //    0.1f,  -0.05f, 0.0f,//B
       //    0.05f,  -0.05f, 0.0f,//B2
       //   0.0f, - 0.2f, 0.0f,//C
       //   0.0f,-0.1625f,0.0f,//C2
       //   -0.1f,-0.05f,0.0f,//D
       //    -0.05f,-0.05f,0.0f,//D2

         // -0.0875f,  -0.15f, 0.0f,//4z
         // -0.06875f,  -0.175f, 0.0f,//5z
         // 0.05f,  -0.1875f, 0.0f,//6
         // -0.05f,  -0.1875f, 0.0f,//6z
         // 0.0375f,  -0.1375f, 0.0f,//12
         // -0.0375f,  -0.1375f, 0.0f,//12z
         // 0.03125f, - 0.15f, 0.0f,//13
         // -0.03125f, - 0.15f, 0.0f,//13z
         // 0.021875f, - 0.159375f, 0.0f,//14
         // -0.021875f, - 0.159375f, 0.0f,//14z

            //    0.05f,  -0.2f, 0.0f,//U1
            //    0.1f,  -0.2f, 0.0f,//U2
            //    -0.1f,  0.1f, 0.0f,//U3
            //    -0.05f,  0.1f, 0.0f,//U4
            //    0.05f,  0.1f, 0.0f,//U5
            //    0.1f,  0.1f, 0.0f,//U6


 0.05f,  0.1f, 0.0f,//U5
 0.1f,  0.1f, 0.0f,//U6
0.1f,  -0.05f, 0.0f,//B

0.05f,  0.1f, 0.0f,//U5
0.05f,  -0.05f, 0.0f,//B2
0.1f,  -0.05f, 0.0f,//B


         0.05f,  -0.05f, 0.0f,//B2
         0.1f,  -0.05f, 0.0f,//B
 0.1f,  -0.2f, 0.0f,//U2


      0.05f,  -0.05f, 0.0f,//B2
         0.1f,  -0.2f, 0.0f,//U2
 0.0375f,  -0.1375f, 0.0f,//12

         0.1f,  -0.2f, 0.0f,//U2
 0.0375f,  -0.1375f, 0.0f,//12
0.03125f, - 0.15f, 0.0f,//13

0.03125f, - 0.15f, 0.0f,//13
    0.1f,  -0.2f, 0.0f,//U2
         0.05f,  -0.1875f, 0.0f,//6

         0.03125f, - 0.15f, 0.0f,//13
           0.05f,  -0.1875f, 0.0f,//6
          0.021875f, - 0.159375f, 0.0f,//14


       0.05f,  -0.1875f, 0.0f,//6
       0.021875f, - 0.159375f, 0.0f,//14
0.0f, - 0.2f, 0.0f,//C

         0.021875f, - 0.159375f, 0.0f,//14
  0.0f, - 0.2f, 0.0f,//C
0.0f,-0.1625f,0.0f,//C2


            0.0f, - 0.2f, 0.0f,//C
            0.0f,-0.1625f,0.0f,//C2
           -0.05f,  -0.1875f, 0.0f,//6z


            0.0f,-0.1625f,0.0f,//C2
           -0.05f,  -0.1875f, 0.0f,//6z
           -0.021875f, - 0.159375f, 0.0f,//14z


            -0.05f,  -0.1875f, 0.0f,//6z
            -0.021875f, - 0.159375f, 0.0f,//14z
            -0.06875f,  -0.175f, 0.0f,//5z

           -0.021875f, - 0.159375f, 0.0f,//14z
           -0.06875f,  -0.175f, 0.0f,//5z
           -0.03125f, - 0.15f, 0.0f,//13z


           -0.06875f,  -0.175f, 0.0f,//5z
           -0.03125f, - 0.15f, 0.0f,//13z
           -0.0875f,  -0.15f, 0.0f,//4z

          -0.03125f, - 0.15f, 0.0f,//13z
          -0.0875f,  -0.15f, 0.0f,//4z
          -0.0375f,  -0.1375f, 0.0f,//12z


           -0.1f,-0.05f,0.0f,//D
          -0.0375f,  -0.1375f, 0.0f,//12z
          -0.0875f,  -0.15f, 0.0f,//4z

          -0.1f,-0.05f,0.0f,//D
          -0.0375f,  -0.1375f, 0.0f,//12z
          -0.05f,-0.05f,0.0f,//D2


           -0.1f,-0.05f,0.0f,//D
           -0.05f,-0.05f,0.0f,//D2
          -0.1f,  0.1f, 0.0f,//U3

          -0.1f,  0.1f, 0.0f,//U3
          -0.05f,  0.1f, 0.0f,//U4
          -0.05f,-0.05f,0.0f,//D2

         0.05f,  -0.2f, 0.0f,//U1
         0.1f,  -0.2f, 0.0f,//U2
         0.05f,  -0.1875f, 0.0f,//6

 };
int qpoints = 180;//amount of points
    letteru(){
   size = 0.5f;
   positionX = 0;
   positionY = 0;
   positionZ = 0;
    }
    ~letteru(){
        delete[] normal;
        delete[] verticle;
    }

};
#endif // LETTERS_H

