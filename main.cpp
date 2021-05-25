#include "View.h"
#include "Controller.h"
#include "Model.h"

int main() {
	View v;
	Model m;
	Controller c(&v, &m);
	v.setListener(&c);
	v.run();
}