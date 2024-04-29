#include "view.h"
#include <iostream>
using namespace std;

void View:: setListener(ViewListener* listener){
    this->listener = listener;
}

void View::print(int n){
    cout << n << endl;
}

void View::run(){
    cout << "Enter 'add' to increase by one,\n"
                    << "Enter 'show' to show the number of times 'add' was entered." << endl;
            string input;
            while(true) {
                cin >> input;
                if (input == "add") {
                    listener->userEnterAdd();
                }
                else if (input == "show") {
                    listener->userEnterAddShow();
                }
            }   
}
