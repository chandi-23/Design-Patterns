#include "view/view.h"
#include "controller/controller.h"
#include "model/model.h"

int main() {
	View v;
	Model m;
	Controller c(&v, &m);
	v.setListener(&c);
	v.run();
}