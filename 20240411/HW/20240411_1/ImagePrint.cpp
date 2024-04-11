#include "ImagePrint.h"

ImagePrint::ImagePrint()
{
}

ImagePrint::~ImagePrint()
{
	delete box;
}

void ImagePrint::IntroPrint()
{
	std::cout << "\n\n\n\n";
	std::cout << "\t\t#################################################################\n\n";
	std::cout << "\t\t _   _                 _               ____  _ _     _      \n";
	std::cout << "\t\t| \\ | |_   _ _ __ ___ | |__   ___ _ __/ ___|| (_) __| | ___ \n";
	std::cout << "\t\t|  \\| | | | | '_ ` _ \\| '_ \\ / _ \\ '__\\___ \\| | |/ _` |/ _ \\\n";
	std::cout << "\t\t| |\\  | |_| | | | | | | |_) |  __/ |   ___) | | | (_| |  __/\n";
	std::cout << "\t\t|_| \\_|\\__,_|_| |_| |_|_.__/ \\___|_|  |____/|_|_|\\__,_|\\___|\n\n";
	std::cout << "\t\t#################################################################\n\n";
	std::cout << "\n\n";

	box->IntroSelection();


}
