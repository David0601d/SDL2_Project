#include <SDL.h>
#include <SDL_image.h>
#include <iostream>
#include "RenderWindow.hpp"

RenderWindow::RenderWindow(const char* p_title, int p_w, int p_h)
	:window(NULL), renderer(NULL)//.hpp������
{
	window = SDL_CreateWindow(p_title, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, p_w, p_h, SDL_WINDOW_SHOWN);


	if (window == NULL)
	{
		std::cout << "Window failed to init. Error " << SDL_GetError() << std::endl;

	}
	//�i�DSDL���Q�nrender�A���n�i�D�L��render����
	//�ĤG�ӰѼƬO�@��index�A�n�i�D�ϧ��X�ʵ{���A�קK�èӡA-1�����O�ϥβĤ@�ӡA�����ڭ̪��ݨD
	//SDL_RENDERER_ACCELERATED�O���Y���@�i��d�b�o�x�q����xbox��playstation�A�ϥΨ��i��d�A�����L�U�ַU�n

	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);

}


void RenderWindow::cleanUp()
{
	SDL_DestroyWindow(window);
}

