#pragma once

#include "view_listener.h"

class View {
    ViewListener *listener;
    public:
        void setListener(ViewListener* listener);
        void print(int n);
        void run();
};