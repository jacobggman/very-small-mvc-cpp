#pragma once
#include "Model.h"
#include "View.h"
#include "ViewListener.h"

class Controller : public ViewListener
{
public:
	Controller(View* view, Model* model);

	View* view;
	Model* model;

	// Inherited via ViewListener
	virtual void userEnterAdd() override;
	virtual void userEnterAddShow() override;
};
