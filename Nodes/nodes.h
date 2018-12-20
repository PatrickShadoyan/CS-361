//
// Created by Patrick on 12/7/2018.
//

#ifndef NODES_NODES_H
#define NODES_NODES_H

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
    coordinate() = default;
    coordinate(int x, int y)
    {
        coordinate::x = x;
        coordinate::y = y;
    }
    int getX() const {
        return x;
    }

    void setX(int x) {
        coordinate::x = x;
    }
    int getY() const {
        return y;
    }

    void setY(int y) {
        coordinate::y = y;
    }
private:
    int x;
    int y;
};

class node
{
public:
    node() = default;
    node(vector<node*> y, coordinate p, int i)
    {
        x = y;
        position = p;
        id = i;
    }
    int getId() const {
        return id;
    }

    void setId(int id) {
        node::id = id;
    }

    const coordinate &getPosition() const {
        return position;
    }

    void setPosition(const coordinate &position) {
        node::position = position;
    }

    const vector<node *> &getX() const {
        return x;
    }

    void setX(const vector<node *> &x) {
        node::x = x;
    }
private:
    vector<node*> x;
    coordinate position;
    int id;
};

#endif //NODES_NODES_H
