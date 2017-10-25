#pragma once    // protects you from circular includes

#include <SDL/SDL.h>
#include <GL/glew.h>

class MainGame
{
public:
	MainGame();
	~MainGame();

	void run();

	void initSystems();

private:
	SDL_Window* _window; //pointer for opening window
	int _screenWidth;	
	int _screenHeight;
};

