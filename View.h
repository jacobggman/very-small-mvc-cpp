#pragma once

#include <iostream>

#include "ViewListener.h"

class View
{
	ViewListener* listener;
public:
	void setListener(ViewListener* listener);
	void printNumber(int n);

	// GUI CODE
	void run();
};
