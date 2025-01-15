#include "stdio.h"
#include <SDL3/SDL.h>

int main(){
    if (!SDL_Init(SDL_INIT_VIDEO)) {
        printf("It should just crash"); 
        return 0; 
    }
    printf("This is working?");
    return 0; 
}