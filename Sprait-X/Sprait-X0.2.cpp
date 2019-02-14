


//334
/* ���������� ���������� GLUT */
#include <gl/glut.h>
#include <stdlib.h>
using namespace std;
//--------------------------------
int ics = 0, igrek = 0;
int but = 0, stat = 0 ;
int Rcist = 0, Gcist = 0, Bcist = 0;//---  !!! ���� "�����"
int vcr, vcg, vcb;// ��������� ����������
class box{
	
	public:
	int RB, GB, BB;// ����
	int Scale;// ������
	int Xcoord ; // ���������� �� X
	int Ycoord ;// ���������� �� Y
	box() {
		RB = 200; GB = 200; BB = 200;
		Scale = 13;
		Xcoord = 200;
		Ycoord = 14;
	}
	void Visyal() {
		glBegin(GL_POLYGON);
		glVertex2f(Xcoord - Scale, Ycoord - Scale);
		glVertex2f(Xcoord - Scale, Ycoord + Scale);
		glVertex2f(Xcoord + Scale, Ycoord + Scale);
		glVertex2f(Xcoord + Scale, Ycoord - Scale);
		glEnd();
	}

	void Manip() {
		
		if (stat == GLUT_DOWN &&  (igrek > Ycoord - Scale && igrek <Ycoord + Scale) &&( ics > Xcoord - Scale &&  ics < Xcoord + Scale)) {

			

			switch (but) {


			case GLUT_LEFT_BUTTON:
				RB = Rcist;
				GB = Gcist;
				BB = Bcist;
				

				break;
			case GLUT_RIGHT_BUTTON:
				RB = 200;
				GB = 200;
				BB = 200;
				break;

			}
			glutPostRedisplay();

		}
	}
	
};                                         //
class indicator {
public:
	int iScale;// ������
	int iXcoord; // ���������� �� X
	int iYcoord;// ���������� �� Y
	int iRB, iGB, iBB;// ����
	indicator() {
		iRB = 50; //!!! ������������ �����
		iGB = 100;
		iBB = 139;
		iXcoord = 0;
		iYcoord = 0;
		iScale = 15;

	}
	void iVisyal() {
		glColor3ub(iRB, iGB, iBB);
		glBegin(GL_POLYGON);
		glVertex2f(iXcoord - iScale, iYcoord - iScale);
		glVertex2f(iXcoord - iScale, iYcoord + iScale);
		glVertex2f(iXcoord + iScale, iYcoord + iScale);
		glVertex2f(iXcoord + iScale,iYcoord - iScale);
		glEnd();
	}
};
class knopka {
public:
	int kScale;// ������
	int kXcoord; // ���������� �� X
	int kYcoord;// ���������� �� Y
	int kRB, kGB, kBB;// ����
	knopka() {
		kScale = 8;
		kXcoord = 0;
		kYcoord = 0;
		kRB= 0, kGB=0, kBB=0;
	};
	knopka(int Xcoord, int Ycoord)
	{
		kScale = 8;
		kXcoord = Xcoord;
		kYcoord = Ycoord;
		kRB = 0, kGB = 0, kBB = 0;
	};
	void kVisyal(int r,int g,int b) {
			 
			 glColor3ub(r, g, b);
			 glBegin(GL_POLYGON);
			 glVertex2f(kXcoord - kScale, kYcoord - kScale);
			 glVertex2f(kXcoord - kScale, kYcoord + kScale);
			 glVertex2f(kXcoord + kScale, kYcoord + kScale);
			 glVertex2f(kXcoord + kScale, kYcoord - kScale);
			 glEnd();
	}
		 void Manip(int &n) { // -- m - ���� -

			 if (stat == GLUT_DOWN &&   igrek > kYcoord - kScale && igrek <kYcoord + kScale && ics > kXcoord - kScale &&  ics < kXcoord + kScale) {

				 switch (but) {


				 case GLUT_LEFT_BUTTON:

					n += 10;

					 break;
				 case GLUT_RIGHT_BUTTON:
					
					 n += 10;
					 break;

				 }
				 glutPostRedisplay();

			 }
		 }
};

class tasklor : public indicator , knopka {   //-------------------------------------------------------------------------------------
public:
	
	
	indicator a;
	
	int Rsvoi, Gsvoi, Bsvoi;//-- !!! ���� ������
	
	int Scale;// ������
	int Xcoord; // ���������� �� X
	int Ycoord;// ���������� �� Y
	
	int RB, GB, BB;// ����
	knopka rcolor;
	knopka gcolor;
	knopka bcolor;

	tasklor(int x,int y) { //-- ����������� tasklor
		
		Rsvoi = 0;
		Gsvoi = 0;
		Bsvoi = 0;
		RB = 200;
		GB = 200;
		BB = 200;
		Xcoord = x;
		Ycoord = y;
		Scale = 50;

		rcolor.kXcoord = Xcoord - 33;
        rcolor.kYcoord = Ycoord + 24;


		gcolor.kXcoord = Xcoord;
		gcolor.kYcoord = Ycoord + 24;

		bcolor.kXcoord = Xcoord + 33;
		bcolor.kYcoord = Ycoord + 24;


		a.iXcoord = Xcoord;
		a.iYcoord = Ycoord - 25;
		
		
			
		
		

	};
	
				
	void Visyal() {
	
		glColor3ub(RB, GB, BB);
		glBegin(GL_POLYGON);
		glVertex2f(Xcoord - Scale, Ycoord - Scale);
		glVertex2f(Xcoord - Scale, Ycoord + Scale);
		glVertex2f(Xcoord + Scale, Ycoord + Scale);
		glVertex2f(Xcoord + Scale, Ycoord - Scale);
		glEnd();
		a.iVisyal();
		rcolor.kVisyal(250, 0, 0);
		gcolor.kVisyal(0, 250, 0);
		bcolor.kVisyal(0, 0, 250);
	}
	void Manip() {
		rcolor.Manip(a.iRB);
		gcolor.Manip(a.iGB);
		bcolor.Manip(a.iBB);
		if (stat == GLUT_DOWN &&   igrek > Ycoord - Scale && igrek <Ycoord + Scale && ics > Xcoord - Scale &&  ics < Xcoord + Scale) {

			switch (but) {


			case GLUT_LEFT_BUTTON:

				Rcist = a.iRB ;
				Gcist =  a.iGB ;
				Bcist  = a.iBB ;

				break;
			case GLUT_RIGHT_BUTTON:
				RB = 200;
				GB = 200;
				BB = 200;
				break;

			}
			glutPostRedisplay();

		}
		
	}
};


//----------------------------------------------------------
/* ��������� ������ � ������ ���� */
GLint Width = 1366, Height = 768;
int const wy = 25;// ����������� ����������
int const wx = 42; // �������������� ����������
int sum = wy * wx;

box qvadra[wx][wy];

//--------------------------------------------�������//
tasklor monA(90, 70);
tasklor monB(90, 190);
tasklor monC(90, 310);// 120 y +

tasklor monD(90, 430);
tasklor monE(90, 550);

//---------------------------------------------------//



//---


	void Mouse(int button, int state, int x, int y) {
		//---
		ics = x;
		but = button;
		igrek = y;
		stat = state;
		

		for (int y = 0; y < wy; y++) {
			
			for (int x = 0; x < wx; x++) {
				
				qvadra[x][y].Manip();
			}
		}
		monA.Manip();
		monB.Manip();
		monC.Manip();
		monD.Manip();
		monE.Manip();
		
	};

	void postroenie() {
		
		
		monA.Visyal();
		
		monB.Visyal();
		monC.Visyal();
		monD.Visyal();
		monE.Visyal();
	
	
	};



/* ��� ������� ��������� ���� ������� �� ����� */
	void Display(void)
	{




		glClearColor(0, 0, 0, 1);
		glClear(GL_COLOR_BUFFER_BIT);


		
		int TY = 0;
		int TX = 0;
	
	for (int y = 0; y < wy; y++) {
		TY += 28;
			TX = 0;//----
		
		for (int x = 0; x < wx; x++) {
			TX += 28;
			glColor3ub(qvadra[x][y].RB, qvadra[x][y].GB, qvadra[x][y].BB);//--
			if (x == 0 && y == 0) {
			TX = qvadra[x][y].Xcoord;
			TY = qvadra[x][y].Ycoord;
		}
			if (x == 0) {
				TX = qvadra[x][y].Xcoord;

			}
				qvadra[x][y].Xcoord = TX;//    ������� ������� ///!!! =28! error
				qvadra[x][y].Ycoord = TY;
		
			qvadra[x][y].Visyal();//--
			}
		}
	
 postroenie();

		// -------------------
	



	glFinish();
}

/* ������� ���������� ��� ��������� �������� ���� */
void Reshape(GLint w, GLint h)
{
	Width = w;
	Height = h;

	/* ������������� ������� ������� ����������� */
	glViewport(0, 0, w, h);

	/* ��������������� �������� */
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0, w, h, 0, -1.0, 1.0);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

	 ///////////

///////////////////////////////////////////////////////////////////

/* ������� ���� ���������� */
int main(int argc, char *argv[])
{
	glutInit(&argc, argv);             //  ���������� ��������� ������������� ����� ���������� GLUT 
	glutInitDisplayMode(GLUT_RGB); //  �������������� ����� ����� � ����������� ������������ (������������) ����� RGB.
	glutInitWindowSize(Width, Height); // ������������ ��� ������� ��������� �������� ����.
	glutCreateWindow("SPRAIT-X"); // ������ ��������� ���� � ������������� ���� ���� �� ������
	glutMouseFunc(Mouse);
	glutDisplayFunc(Display);   // - ������������ ������� Display(), Reshape() � Keyboard() ��� �������, ������� �����
	glutReshapeFunc(Reshape);   // �������, ��������������, ��� ����������� ����,


	glutMainLoop();  // �������� ���� ������� � ����� ������ �������
}

