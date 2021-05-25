#include "Controller.h"

Controller::Controller(View* view, Model* model)
{
	this->view = view;
	this->model = model;
}

void Controller::userEnterAdd()
{
	this->model->addByOne();
}

void Controller::userEnterAddShow()
{
	auto userNumber = this->model->getAddTimes();
	this->view->printNumber(userNumber);
}