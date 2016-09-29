#include <windows.h>
#include <GL/glut.h>
#include <cmath>

void myDisplay(){
    GLfloat pi=3.14159265358;
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
        glVertex2f(-1.0f,0.0f);
        glVertex2f(1.0f,0.0f);
        glVertex2f(0.0f,-1.0f);
        glVertex2f(0.0f,1.0f);
    glEnd();
    GLfloat step=0.01f;
    glBegin(GL_LINE_STRIP);
    //����ط���Ҫע��-pi~pi��-1~1����֮���ӳ��
        for(GLfloat i=-pi;i<=pi;i+=step)
            glVertex2f(i/pi,sin(i)/pi);
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(500,500);
    glutCreateWindow("second OpenGL program");
    glutDisplayFunc(&myDisplay);
    glutMainLoop();
    return 0;
}
