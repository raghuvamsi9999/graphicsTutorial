#include "MainGame.h"


MainGame::MainGame()
{
	_window = nullptr; //initializing the pointer
	_screenWidth = 1024;//init screen width
	_screenWidth = 768;//init screen height
}


MainGame::~MainGame()
{
}

void MainGame::run()
{
	initSystems();
}

void MainGame::initSystems()
{
	//initialize sdl, it sets up everything sdl needs to run, the flag inside the paranthesis init everything sdl has to offer
	SDL_Init(SDL_INIT_EVERYTHING); 
	//creates the window and takes care of all the os stuff
	_window = SDL_CreateWindow("Graphics Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, _screenWidth, _screenHeight, SDL_WINDOW_OPENGL);
}