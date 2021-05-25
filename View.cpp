#include "View.h"

void View::setListener(ViewListener* listener)
{
	this->listener = listener;
}

void View::printNumber(int n)
{
	std::cout << n << "\n";
}

void View::run()
{
	while (true)
	{
		std::string enter;
		std::cin >> enter;
		if (enter == "add")
		{
			listener->userEnterAdd();
		}
		else if (enter == "show")
		{
			listener->userEnterAddShow();
		}
	}
}