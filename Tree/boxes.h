//
// Created by Patrick on 12/9/2018.
//

#ifndef TREE_BOXES_H
#define TREE_BOXES_H

#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <vector>
#include <ctime>
#include <queue>
#include <random>

using namespace std;

class box {
public:
    box() {
        left = NULL;
        right = NULL;
    }

    box(int v) {
        val = v;
        left = NULL;
        right = NULL;
    }

    void addnode(int v) {
        if (v == val) {
            frequency++;                          ///increments the frequency, without the use of a function
        } else if (v < val) {
            if (left == NULL) {
                left = new box(v);
            } else {
                left->addnode(v);
            }
        } else {
            if (right == NULL) {
                right = new box(v);
            } else {
                right->addnode(v);
            }
        }
    }

    void display() {
        if (left != NULL) {
            left->display();
        }
        cout << " " << val;
        if(frequency > 0 && frequency < 1000)
        {
            cout << " (" << val << " has a frequency of " << frequency+1 << "), " << endl;
        }
        if (right != NULL) {
            right->display();
        }
    }
    void display_wfrequency() {
        if (left != NULL) {
            left->display_wfrequency();
        }
        cout << " " << val;
        if (right != NULL) {
            right->display_wfrequency();
        }
    }
    box * getleft() { ///testing purposes
        return left;
    }

    box * getRight() { ///testing purposes
        return right;
    }
    int getVal() ///testing purposes
    {
        return val;
    }

private:
    int val;
    int frequency;
    box *left;
    box *right;
};

#endif //TREE_BOXES_H
