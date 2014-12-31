#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>

using namespace std;

static void display() {
        glClear(GL_COLOR_BUFFER_BIT);
        glFlush();
}

static int program_init() {
        GLuint vao;
        GLuint buffer;
        glGenVertexArrays(1, &vao);
        glBindVertexArray(vao);
        glGenBuffers(1, &buffer);
        glBindVertexArray(0); //Unbind previously binded vao
}

int main(int argc, char **argv) {
        glutInit(&argc, argv);
        glutInitDisplayMode(GLUT_RGBA);
        glutInitWindowSize(512,512);
        glutInitContextVersion(4, 3);
        glutInitContextProfile(GLUT_CORE_PROFILE);
        glutCreateWindow(argv[0]);

        if(glewInit()) {
                exit(EXIT_FAILURE);
        }
        glutDisplayFunc(display);
        glutMainLoop();

}
