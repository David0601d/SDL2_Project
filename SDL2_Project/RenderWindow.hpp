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
		���]�����func a�Bb. func a���ܼ� int box = 5, func b���ܼ� int bbox = 5,
		�{�bfunc b�ݭn func a��box�ȮɡA�u�n��box��address�N�n

	*/

	SDL_Window* window;
	SDL_Renderer* renderer;



};
