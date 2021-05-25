#include "View.h"

void View::setListener(ViewListener* listener)
{
	this->listener = listener;
}

void View::add()
{
	std::string enter;
	std::cin >> enter;
	if (enter == "add")
	{
		listener->add();
		// std::cout << "need to add\n";
	}
	else if (enter == "show")
	{
		listener->getResult();
		// std::cout << "need to add\n";
	}
}

void View::show(int n)
{
	std::cout << n << "\n";
}

void View::run()
{
	while (true)
	{
		add();
	}
}