#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include<GL/glut.h>

double cameraAngle;

void display(){
	//codes for Models, Camera
	
	//clear the display
	//glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0,0,0,0);	//color black
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);		//clear buffers to preset values

	/***************************
	/ set-up camera (view) here
	****************************/ 
	//load the correct matrix -- MODEL-VIEW matrix
	glMatrixMode(GL_MODELVIEW);		//specify which matrix is the current matrix

	//initialize the matrix
	glLoadIdentity();				//replace the current matrix with the identity matrix [Diagonals have 1, others have 0]

	//now give three info
	//1. where is the camera (viewer)?
	//2. where is the camera looking?
	//3. Which direction is the camera's UP direction?

	//gluLookAt(0,-150,20,	0,0,0,	0,0,1);
	gluLookAt(150*sin(cameraAngle), -150*cos(cameraAngle), 50,		0,0,0,		0,0,1);
	
	//again select MODEL-VIEW
	glMatrixMode(GL_MODELVIEW);


	/**************************************************
	/ Grid and axes Lines(You can remove them if u want)
	***************************************************/
	// draw the three major AXES
	//
	//glBegin(GL_LINES);
	//	//X axis
	//	glColor3f(0, 1, 0);	//100% Green
	//	glVertex3f(-150, 0, 0);
	//	glVertex3f( 150, 0, 0);
	//	
	//	//Y axis
	//	glColor3f(0, 0, 1);	//100% Blue
	//	glVertex3f(0, -150, 0);	// intentionally extended to -150 to 150, no big deal
	//	glVertex3f(0,  150, 0);
	//	
	//	//Z axis
	//	glColor3f(1, 1, 1);	//100% White
	//	glVertex3f( 0, 0, -150);
	//	glVertex3f(0, 0, 150);
	//glEnd();
	//
	////some gridlines along the field
	//int i;

	//glColor3f(0.5, 0.5, 0.5);	//grey
	//glBegin(GL_LINES);
	//	for(i=-10;i<=10;i++){

	//		if(i==0)
	//			continue;	//SKIP the MAIN axes

	//		//lines parallel to Y-axis
	//		glVertex3f(i*10, -100, 0);
	//		glVertex3f(i*10,  100, 0);

	//		//lines parallel to X-axis
	//		glVertex3f(-100, i*10, 0);
	//		glVertex3f( 100, i*10, 0);
	//	}
	//glEnd();

	//


	/****************************
	/ Add your objects from here
	****************************/



	//window 1
	 glColor3f(.7	,.7	,.7);
	glBegin(GL_QUADS);{
	
		glVertex3f(5,-.5,10);
		glVertex3f(15,-.5,10);
		glVertex3f(15,-.5,25);
		glVertex3f(5,-.5,25);
	
	}glEnd();
	//111
	 glColor3f(.2	,.2	,.2);
	glBegin(GL_QUADS);{
	
		glVertex3f(6,-.9,12);
		glVertex3f(9,-.9,12);
		glVertex3f(9,-.9,16);
		glVertex3f(6,-.9,16);
	
	}glEnd();
	//222
	 glColor3f(.2	,.2	,.2);
	glBegin(GL_QUADS);{
	
		glVertex3f(11,-.9,12);
		glVertex3f(14,-.9,12);
		glVertex3f(14,-.9,16);
		glVertex3f(11,-.9,16);
	
	}glEnd();

	//111
	 glColor3f(.2	,.2	,.2);
	glBegin(GL_QUADS);{
	
		glVertex3f(6,-.9,18);
		glVertex3f(9,-.9,18);
		glVertex3f(9,-.9,23);
		glVertex3f(6,-.9,23);
	
	}glEnd();
	//222
	 glColor3f(.2	,.2	,.2);
	glBegin(GL_QUADS);{
	
		glVertex3f(11,-.9,18);
		glVertex3f(14,-.9,18);
		glVertex3f(14,-.9,23);
		glVertex3f(11,-.9,23);
	
	}glEnd();

	//window 2
  glColor3f(.7	,.7	,.7);
	glBegin(GL_QUADS);{
		 
		glVertex3f(25,-.5,10);
		glVertex3f(35,-.5,10);
		glVertex3f(35,-.5,25);
		glVertex3f(25,-.5,25);
	
	}glEnd();

	//111
	 glColor3f(.2	,.2	,.2);
	glBegin(GL_QUADS);{
	
		glVertex3f(26,-.9,11);
		glVertex3f(29,-.9,11);
		glVertex3f(29,-.9,16);
		glVertex3f(26,-.9,16);
	
	}glEnd();
	//222
	 glColor3f(.2	,.2	,.2);
	glBegin(GL_QUADS);{
	
		glVertex3f(31,-.9,11);
		glVertex3f(34,-.9,11);
		glVertex3f(34,-.9,16);
		glVertex3f(31,-.9,16);
	
	}glEnd();
	//111
	 glColor3f(.2	,.2	,.2);
	glBegin(GL_QUADS);{
	
		glVertex3f(26,-.9,18);
		glVertex3f(29,-.9,18);
		glVertex3f(29,-.9,23);
		glVertex3f(26,-.9,23);
	
	}glEnd();
	//222
	 glColor3f(.2	,.2	,.2);
	glBegin(GL_QUADS);{
	
		glVertex3f(31,-.9,18);
		glVertex3f(34,-.9,18);
		glVertex3f(34,-.9,23);
		glVertex3f(31,-.9,23);
	
	}glEnd();
	

	//door
	     glPushMatrix();{
	glColor3f(.7	,.7	,.7);
	 
	glTranslatef(40,10,12);
	glScalef(1,6,18);
	
	glutSolidCube(1);
	glColor3f(.2	,.2	,.2);
	glutWireCube(1);
	 

	}glPopMatrix();

		 //door window 1
	     glPushMatrix();{
	glColor3f(.2	,.2	,.2);
	 
	glTranslatef(40,3,16);
	glScalef(1,3,10);
	
	glutSolidCube(1);
	 

	}glPopMatrix();

		 //door window 2
	     glPushMatrix();{
	glColor3f(.2	,.2	,.2);
	 
	glTranslatef(40,17,16);
	glScalef(1,3,10);
	
	glutSolidCube(1);
	 

	}glPopMatrix();

		 	//pilar 1
	     glPushMatrix();{
	glColor3f(.7	,.7	,.7);
	 
	glTranslatef(48,1,20);
	glScalef(2,1,28);
	
	glutSolidCube(1);
	 
	 

	}glPopMatrix();

		  	//pilar 2
	     glPushMatrix();{
	glColor3f(.7	,.7	,.7);
	 
	glTranslatef(48,7,20);
	glScalef(2,1,28);
	
	glutSolidCube(1);
	 
	 

	}glPopMatrix();

		  	//pilar 3
	     glPushMatrix();{
	glColor3f(.7	,.7	,.7);
	 
	glTranslatef(48,15,20);
	glScalef(2,1,28);
	
	glutSolidCube(1);
	 
	 

	}glPopMatrix();

		  	//pilar 4
	     glPushMatrix();{
	glColor3f(.7	,.7	,.7);
	 
	glTranslatef(48,19,20);
	glScalef(2,1,28);
	
	glutSolidCube(1);
	 
	 

	}glPopMatrix();

		 	  	//pilar middle
	     glPushMatrix();{
	glColor3f(.7	,.7	,.7);
	 
	glTranslatef(48,10,34);
	glScalef(2,20,2);
	
	glutSolidCube(1);
	 
	 

	}glPopMatrix();

 

		 //roof wall 1
      glPushMatrix();{
	 glColor3f(.7	,.7	,.7);
	glRotatef(45,1,0,0);
	glTranslatef(25,40,16);
	glScalef(50,2,18);
	
	glutSolidCube(1);
	/*glColor3f(0,1,0);
	glutWireCube(1);*/

	}glPopMatrix();


	  	 //roof wall 2
      glPushMatrix();{
	 glColor3f(.7	,.7	,.7);
	glRotatef(-45,1,0,0);
	glTranslatef(25,-26,32);
	glScalef(50,2,18);
	
	glutSolidCube(1);
	/*glColor3f(0,1,0);
	glutWireCube(1);*/

	}glPopMatrix();

	//uper wall
      glPushMatrix();{
	glColor3f(1	,.31	,.31);
	//glRotatef(-40,0,0,1);
	glTranslatef(20,10,21);
	glScalef(40,20,30);
	
	glutSolidCube(1);
	/*glColor3f(0,1,0);
	glutWireCube(1);*/

	}glPopMatrix();
	  
	  
	  //under wall

	    glPushMatrix();{
	glColor3f(.7	,.7	,.7);
	//glRotatef(-40,0,0,1);
	glTranslatef(25,10,3);
	glScalef(50,20,6);
	
	glutSolidCube(1);
	/*glColor3f(1,0,1);
	glutWireCube(1);*/

	}glPopMatrix();


		//roof side 1

		glPushMatrix();{
			glTranslatef(48,10,10);
		 glRotatef(180,0,0,1);
	double equ[4];
	equ[0]=1;
	equ[1]=0;
	equ[2]=0;
	equ[3]=0;

	glClipPlane(GL_CLIP_PLANE0,equ);

	glEnable(GL_CLIP_PLANE0);{
	glTranslatef(-10,0,24);
	 glColor3f(1	,.31	,.31);
	glutSolidCone(13.5,45,20,20);
 
	}glDisable(GL_CLIP_PLANE0);

	}glPopMatrix();


		//roof side 2
glPushMatrix();{
		double equ[4];
	equ[0]=1;
	equ[1]=0;
	equ[2]=0;
	equ[3]=0;

	glClipPlane(GL_CLIP_PLANE0,equ);

	glEnable(GL_CLIP_PLANE0);{
	glTranslatef(-10,10,35);
	  glColor3f(1	,.31	,.31);
	glutSolidCone(15,30,20,20);
 
	}glDisable(GL_CLIP_PLANE0);

	}glPopMatrix();


         //roof side window
 
	     glPushMatrix();{
	glColor3f(.2	,.2	,.2);
	 
	glTranslatef(47,10,39);
	glScalef(1,3,5);
	
	glutSolidCube(1);
	 

	}glPopMatrix();


		 //sheree wall left
		 glPushMatrix();{
		 	GLUquadricObj *obj=gluNewQuadric();
	 glTranslatef(48,6,0);
	for (int i = 10; i > 0; i--)
	{
		 
		if(i%2==0){
			  glColor3f(1	,.31	,.31);
		}else
		{
			 glColor3f(.7	,.7	,.7);
		}
		
		glTranslatef(1,0,0);
		gluCylinder(obj,.5,.5,5+i,20,20);
 
	}
	}glPopMatrix();

		  //sheree wall right
		 	 glPushMatrix();{
		 	GLUquadricObj *obj=gluNewQuadric();
	 glTranslatef(48,15,0);
	for (int i = 10; i > 0; i--)
	{
		 
		if(i%2==0){
		 glColor3f(1	,.31	,.31);
		}else
		{
		 glColor3f(.7	,.7	,.7);
		}
		
		glTranslatef(1,0,0);
		gluCylinder(obj,.5,.5,5+i,20,20);
 
	}
	}glPopMatrix();


			   //sheree 1
		 	 glPushMatrix();{
		 glColor3f(1	,.31	,.31);
		  glTranslatef(51,10.5,3);
		glScalef(2,9,6);
		glutSolidCube(1);
	}glPopMatrix();

			    //sheree 2
		 	 glPushMatrix();{
		 glColor3f(.7	,.7	,.7);
		  glTranslatef(53,10.5,2);
		glScalef(2,9,4);
		glutSolidCube(1);
	}glPopMatrix();

			     //sheree 3
		 	 glPushMatrix();{
		 glColor3f(1	,.31	,.31);
		  glTranslatef(55,10.5,1);
		glScalef(2,9,2);
		glutSolidCube(1);
	}glPopMatrix();

			 	    //sheree 4
		 	 glPushMatrix();{
		 glColor3f(.7	,.7	,.7);
		  glTranslatef(57,10.5,0.5);
		glScalef(2,9,1);
		glutSolidCube(1);
	}glPopMatrix();

			 //fench 1
              glPushMatrix();{
			 GLUquadricObj *obj=gluNewQuadric();
	glRotatef(-90,0,0,1);
	glTranslatef(-47,-50,0);
	for (int i = 0; i < 20; i++)
	{
		 
		if(i%2==0){
			 glColor3f(.7	,.7	,.7);
		}else
		{
	 glColor3f(1	,.31	,.31);
		}
		glTranslatef(4,0,0);

  gluCylinder(obj,1.5,0.9,10,20,20);
 
	}

	}glPopMatrix();

			   //fench 2
              glPushMatrix();{
			 GLUquadricObj *obj=gluNewQuadric();
	 
	glTranslatef(-50,-35,0);
	for (int i = 0; i < 30; i++)
	{
		 
		if(i%2==0){
			 glColor3f(.7	,.7	,.7);
		}else
		{
	 glColor3f(1	,.31	,.31);
		}
		glTranslatef(4,0,0);

  gluCylinder(obj,1.5,0.9,10,20,20);
 
	}

	}glPopMatrix();

			     //fench 3
              glPushMatrix();{
			 GLUquadricObj *obj=gluNewQuadric();
	 
	glTranslatef(-50,45,0);
	for (int i = 0; i < 30; i++)
	{
		 
		if(i%2==0){
			 glColor3f(.7	,.7	,.7);
		}else
		{
	 glColor3f(1	,.31	,.31);
		}
		glTranslatef(4,0,0);

  gluCylinder(obj,1.5,0.9,10,20,20);
 
	}

	}glPopMatrix();

			  			     //fench 4 left
              glPushMatrix();{
			 GLUquadricObj *obj=gluNewQuadric();
	 
	 glRotatef(-90,0,0,1);
	glTranslatef(-46,70,0);
	for (int i = 0; i < 6; i++)
	{
		 
		if(i%2==0){
			 glColor3f(.7	,.7	,.7);
		}else
		{
	 glColor3f(1	,.31	,.31);
		}
		glTranslatef(4,0,0);

  gluCylinder(obj,1.5,0.9,10+i,20,20);
 
	}

	}glPopMatrix();

			    			     //fench 4 right
              glPushMatrix();{
			 GLUquadricObj *obj=gluNewQuadric();
	 
	 glRotatef(-90,0,0,1);
	glTranslatef(-2,70,0);
	for (int i = 8; i > 0; i--)
	{
		 
		if(i%2==0){
			 glColor3f(.7	,.7	,.7);
		}else
		{
	 glColor3f(1	,.31	,.31);
		}
		glTranslatef(4,0,0);

  gluCylinder(obj,1.5,0.9,10+i*0.74,20,20);
 
	}

	}glPopMatrix();

			  			     //fench door
              glPushMatrix();{
			 GLUquadricObj *obj=gluNewQuadric();
	 
	 glRotatef(-90,0,0,1);
	glTranslatef(-22,70,0);
	for (int i = 0; i < 11; i++)
	{
		 
		 glColor3f(.2	,.2	,.2);
		glTranslatef(2,0,0);

  gluCylinder(obj,1.5,0.9,16,20,20);
 
	}

	}glPopMatrix();

	//ADD this line in the end --- if you use double buffer (i.e. GL_DOUBLE)
	glutSwapBuffers();
}

void animate(){
	//codes for any changes in Models, Camera
	
	cameraAngle += 0.001;	// camera will rotate at 0.002 radians per frame.
	
	//codes for any changes in Models

	//MISSING SOMETHING? -- YES: add the following
	glutPostRedisplay();	//this will call the display AGAIN

}

void init(){
	//codes for initialization

	cameraAngle =0;	//angle in radian
	//clear the screen
	glClearColor(0,0,0, 0);

	/************************
	/ set-up projection here
	************************/
	//load the PROJECTION matrix
	glMatrixMode(GL_PROJECTION);
	
	//initialize the matrix
	glLoadIdentity();

	/*
		gluPerspective() — set up a perspective projection matrix

		fovy -         Specifies the field of view angle, in degrees, in the y direction.
        aspect ratio - Specifies the aspect ratio that determines the field of view in the x direction. The aspect ratio is the ratio of x (width) to y (height).
        zNear -        Specifies the distance from the viewer to the near clipping plane (always positive).
        zFar  -        Specifies the distance from the viewer to the far clipping plane (always positive).
    */
	
	gluPerspective(70,	1,	0.1,	10000.0);
	
}

int main(int argc, char **argv){
	
	glutInit(&argc,argv);							//initialize the GLUT library
	
	glutInitWindowSize(700, 700);
	glutInitWindowPosition(100, 100);
	
	/*
		glutInitDisplayMode - inits display mode
		GLUT_DOUBLE - allows for display on the double buffer window
		GLUT_RGBA - shows color (Red, green, blue) and an alpha
		GLUT_DEPTH - allows for depth buffer
	*/
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGB);	

	glutCreateWindow("Some Title");

	init();						//codes for initialization

	glEnable(GL_DEPTH_TEST);	//enable Depth Testing

	glutDisplayFunc(display);	//display callback function
	glutIdleFunc(animate);		//what you want to do in the idle time (when no drawing is occuring)

	glutMainLoop();		//The main loop of OpenGL

	return 0;
}
