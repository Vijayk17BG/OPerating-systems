#include<Gl/glut.h>
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1,0,0);
	glMatrixMode(GL_MODELVIEW);
	glClearColor(0,0,0,0;);
	glBegin(GL_POLYGON);
	glVertex2f(-0.8,-0.8);
	glVertex2f(0.8,0.8);
	glVertex2f(0.0,0.0);
	gl_End();
	gl_Flush();
}
void time(int a)
{
	glTranslatef(0.1,0.1,0.1);
	glutPostRedisplay();
	glutTimerFunc(600,time,0);
}
int main(int argc,char** argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMo.de()
}













