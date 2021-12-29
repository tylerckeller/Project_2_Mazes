//
// Created by unknown on 9/17/2021.
//

#ifndef CODE_POINT_H
#define CODE_POINT_H


class point {
public:
    point();
    point(int new_x, int new_y);

    int getX();
    int getY();

    void setX(int new_x);
    void setY(int new_y);

private:
    int x, y;

};


#endif //CODE_POINT_H
