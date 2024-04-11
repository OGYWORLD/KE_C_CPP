#include "NumberSlideHandler.h"

int main(void)
{
	NumberSlideHandler* NSH = new NumberSlideHandler;
	NSH->PlayGame();

	delete NSH;

	return 0;
}