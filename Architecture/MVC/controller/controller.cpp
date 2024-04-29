#include "controller.h"

Controller::Controller(View *view, Model *model){
    this->view = view;
    this->model = model;
}

void Controller::userEnterAddShow(){
    int n = this->model->getAddTimes();
    this->view->print(n);
}

void Controller::userEnterAdd(){
    this->model->addByOne();
}