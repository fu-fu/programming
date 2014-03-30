//using namespace STD;
#include <SDL.h>
#include <stdio.h>
#include <unistd.h>

SDL_Window* gWindow = NULL;

int main()
{
	SDL_Init( SDL_INIT_VIDEO );
	gWindow = SDL_CreateWindow ("Test", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 600, 600, SDL_WINDOW_SHOWN );
	sleep(10);
	SDL_Quit();
}

