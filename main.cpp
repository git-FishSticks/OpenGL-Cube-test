#include <iostream>
#include <SDL2/SDL.h>
#include <GL/glew.h>
#include "shader_utils.h";

using namespace std;
int __width = 800;
int __height = 450;

GLuint program;



int init_resources()
{




}

void render(SDL_Window* window)
{
    glClearColor (1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);

    SDL_GL_SwapWindow(window);
}

void cleanup()
{

}

void mainLoop(SDL_Window* window)
{

    while (true) {
            SDL_Event ev;
            while (SDL_PollEvent(&ev)) {
                if (ev.type == SDL_QUIT)
                    return;

            }

            render(window);
        }
}



int main(int argc, char *argv[])
{
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow ("OpenGL Cube",
                                           SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                                           __width, __height, SDL_WINDOW_OPENGL);

    SDL_GL_CreateContext(window);


    mainLoop (window);



    return 0;
}
