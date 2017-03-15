#include "Globals.h"
#include "Application.h"
#include "SDL/include/SDL.h"
#include "ModuleWindow.h"


bool ModuleWindow::Init()
{
	bool ret = true;
		
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		LOG("Window initialitzation error %s", SDL_GetError());
		ret = false;
	}
	if (SDL_CreateWindow("Test", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0) == NULL)
	{
		LOG("Window creation error %s", SDL_GetError());
	}
	
	return ret;
}


// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)

