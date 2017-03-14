#ifndef __ModuleWindow_H__
#define __ModuleWindow_H__

class ModuleWindow : public Module 
{
public:

	bool Init();

	bool CleanUp() { return true; }

private:

	SDL_Window* window;
};
// TODO 1: Create the declaration of ModuleWindow class

#endif //__ModuleWindow_H__