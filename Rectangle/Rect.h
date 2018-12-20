//
// Created by Patrick on 12/7/2018.
//

#ifndef RECTANGLE_RECT_H
#define RECTANGLE_RECT_H

#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <vector>
#include <ctime>
#include <queue>
#include <random>

using namespace std;

class coordinate
{
public:
    coordinate(){}
    coordinate(double ex, double why)
    {
        x = ex;
        y = why;
    }
    double getX() const {
        return x;
    }

    void setX(double x) {
        coordinate::x = x;
    }
    double getY() const {
        return y;
    }

    void setY(double y) {
        coordinate::y = y;
    }
private:
    double x;
    double y;
};

class rect
//        A----------------------------------B
//        ------------------------------------
//        ------------------------------------
//        ------------------------------------
//        ------------------------------------
//        C----------------------------------D
{
public:
    rect() {}

    rect(coordinate a1, coordinate b1, coordinate c1, coordinate d1) {
        a = a1;
        b = b1;
        c = c1;
        d = d1;
    }

    vector<rect> Refine(int repetitions) {  ///Could've used a dynamic array of rect (rectangles) instead of a vector (rect *Refine())

        vector<rect> newrectangle;

        double x_range_begin;
        double x_range_end;
        double y_range_begin;
        double y_range_end;

        double random_x;
        double random_y;
        int random_pick;

        default_random_engine *gptr;
        gptr = new default_random_engine(time(NULL));

        for (double i = 0; i < repetitions; i++) {

            x_range_begin = a.getX();
            x_range_end = d.getX();
            y_range_begin = c.getY();
            y_range_end = b.getY();

            uniform_real_distribution<double> possible_x(x_range_begin, x_range_end);
            uniform_real_distribution<double> possible_y(y_range_begin, y_range_end);

            random_x = possible_x(*gptr);
            random_y = possible_y(*gptr);

            newrectangle.push_back(rect(coordinate(x_range_begin, y_range_end), coordinate(random_x, y_range_end), coordinate(x_range_begin, random_y), coordinate(random_x, random_y)));
            newrectangle.push_back(rect(coordinate(random_x, y_range_end), coordinate(x_range_end, y_range_end), coordinate(random_x, random_y), coordinate(x_range_end, random_y)));
            newrectangle.push_back(rect(coordinate(x_range_begin, random_y), coordinate(random_x, random_y), coordinate(x_range_begin, y_range_begin), coordinate(random_x, y_range_begin)));
            newrectangle.push_back(rect(coordinate(random_x, random_y), coordinate(x_range_end, random_y),coordinate(random_x, y_range_begin), coordinate(x_range_end, y_range_begin)));


            uniform_int_distribution<int> each_rectangle(0, newrectangle.size()-1);

            random_pick = each_rectangle(*gptr);

            a = newrectangle[random_pick].getA();
            b = newrectangle[random_pick].getB();
            c = newrectangle[random_pick].getC();
            d = newrectangle[random_pick].getD();
        }
        return newrectangle;
    }

    coordinate getA() {
        return a;
    }

    coordinate getB()
    {
        return b;
    }
    coordinate getC()
    {
        return c;
    }
    coordinate getD()
    {
        return d;
    }
private:
    coordinate a, b, c, d;
};

#endif //RECTANGLE_RECT_H
