// .h file
#pragma once

#include "../model/model.h"
#include "../view/view.h"
#include "../view/view_listener.h"

class Controller:public ViewListener{
    
    public:
        View * view;
        Model * model;  
        Controller(View* view, Model *model);
        
        // Inherited via ViewListener
        virtual void userEnterAdd() override;
        virtual void userEnterAddShow() override;
};