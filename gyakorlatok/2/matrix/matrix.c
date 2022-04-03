#include <SDL2/SDL.h>

#include <stdbool.h>
#include <stdio.h>

/**
 * SDL2 example
 */
int main(int argc, char* argv[])
{
    SDL_Init(SDL_INIT_VIDEO);

    SDL_Window *window = SDL_CreateWindow("Titlebar goes here", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1024, 768, 0);

    if (!window)
    {
        printf("%s\n", SDL_GetError());
        return 0;
    }
    
    // SDL_Delay(5000);

    SDL_Event event;

    bool run = true;
    while (run)
    {
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_QUIT)
            {
                run = false;
            } 
            else if (event.key.keysym.scancode == SDL_SCANCODE_Q)
            {
                run = false;
            }
        }
    }
        
    // printf("Event queue empty.\n");

    

    SDL_DestroyWindow(window);

    SDL_Quit();
    return 0;
}
