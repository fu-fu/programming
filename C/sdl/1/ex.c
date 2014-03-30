#include <stdio.h>
#include <SDL.h>

int main(int argc, char *argv[]){
	SDL_Init(STD_INIT_EVERYTHING());
	return 0;	
	}

/*
int main(int argc, char *argv[]){
	SDL_Init(SDL_INIT_EVERYTHING);
	printf("numdisplaymodes: %s",SDL_GetNumDisplayModes(1));
	printf("Getdisplaymode: %s",SDL_GetDisplayMode(1));
	printf("desktopdisplaymode: %s",SDL_GetDesktopDisplayMode(1));
	printf("getcurrdisplaymode: %s",SDL_GetCurrentDisplayMode(1));
	printf("getclostestdisplaymode: %s",SDL_GetClosestDisplayMode(1));
//	printf("set"SDL_SetWindowDisplayMode());
	printf("getwindowdisplaymode: %s",SDL_GetWindowDisplayMode(1));
	SDL_Quit();
	return 0;	
}
*/
