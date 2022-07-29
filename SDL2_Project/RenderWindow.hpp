//this ensures that a header file does not get copied to twice
#pragma once 
#include <SDL.h>
#include <SDL_image.h>

class RenderWindow {

public:
	//Constructor
	//we're gonna title our window
	RenderWindow(const char* p_title, int p_w, int p_h);
	void cleanUp();

private:
	//Note: the star is mean to pointer.
	//thnk of pointer like a address to somebody's home
	/*
		假設有兩個func a、b. func a有變數 int box = 5, func b有變數 int bbox = 5,
		現在func b需要 func a的box值時，只要傳box的address就好

	*/

	SDL_Window* window;
	SDL_Renderer* renderer;



};
