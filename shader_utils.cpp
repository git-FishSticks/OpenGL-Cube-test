//
// Created by evgen on 28/08/16.
//

#include <SDL2/SDL_rwops.h>
#include "shader_utils.h";


char* getFile(const char* filename)
{
    SDL_RWops* io = SDL_RWFromFile (filename, "rb");
    if (io == NULL) return NULL;

    Sint64 res_size = SDL_RWsize (io);
    char * res = (char*)malloc (res_size+1);
    Sint64 totalBytesRead = 0;
    Sint64 bytesRead = 1;

    char * buffer = res;
    while (totalBytesRead < res_size && )
    {

    }

}