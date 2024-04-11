#include "NumberSlideHandler.h"

NumberSlideHandler::NumberSlideHandler()
{
}

NumberSlideHandler::~NumberSlideHandler()
{
	delete IP;
}

void NumberSlideHandler::PlayGame()
{
	IP->IntroPrint();
}
