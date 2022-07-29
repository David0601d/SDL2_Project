#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "RenderWindow.hpp"

RenderWindow::RenderWindow(const char* p_title, int p_w, int p_h)
	:window(NULL), renderer(NULL)//.hpp的指標
{
	window = SDL_CreateWindow(p_title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, p_w, p_h, SDL_WINDOW_SHOWN);


	if (window == NULL)
	{
		std::cout << "Window failed to init. Error " << SDL_GetError() << std::endl;

	}
	//告訴SDL說想要render，但要告訴他說render哪裡
	//第二個參數是一個index，要告訴圖形驅動程式，避免亂來，-1指的是使用第一個，滿足我們的需求
	//SDL_RENDERER_ACCELERATED是指若有一張顯卡在這台電腦或xbox或playstation，使用那張顯卡，能讓他愈快愈好

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

}


void RenderWindow::cleanUp()
{
	SDL_DestroyWindow(window);
}

