#include "model.h"

int Model::getAddTimes(){
    return timesAdd;
}

void Model::addByOne(){
    timesAdd += 1;
}