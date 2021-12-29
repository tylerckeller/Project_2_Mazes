//
// Created by unknown on 9/17/2021.
//

#include "point.h"

point::point() {

    x = 0;
    y = 0;

}
point::point(int new_x, int new_y) {

    x = new_x;
    y = new_y;

}

int point::getX() {

    return x;

}
int point::getY() {

    return y;

}

void point::setX(int new_x) {

    x = new_x;

}
void point::setY(int new_y) {

    y = new_y;

}