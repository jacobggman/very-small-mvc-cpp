#include "Controller.h"

Controller::Controller(View* view, Model* model)
{
	this->view = view;
	this->model = model;
}

void Controller::add()
{
	this->model->add();
	auto n = this->model->getNum();
	this->view->show(n);
}

void Controller::getResult()
{
	auto n = this->model->getNum();
	this->view->show(n);
}