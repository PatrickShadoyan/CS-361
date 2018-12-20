#include "boxes.h"

int main() {

    default_random_engine engine(time(0));

    int input;
    int x;
    int garbage;

    queue<int> q;
    box * root;

    cout << "Choose a number of boxes you'd like to generate: ";
    cin >> input;
    cout << endl;

    uniform_int_distribution<int> r(1, 99);
    garbage = r(engine);
    for(int i = 0; i < input; i++)
    {
        q.push(r(engine));
    }

    cout << "Content of queue:";
    root=new box(50);
    for(int i=1; i<input; i++)
    {
        x = q.front();
        cout << " " << x;
        root->addnode(x);
        q.pop();
    }
    cout << endl << endl;
    cout << "Depth-First in-order traversal, with frequencies:" << endl;
    root->display();
    cout << endl;

    cout << endl;
    cout << "Now, in Depth-first in-order traversal, without the frequencies:" << endl;
    root->display_wfrequency();
    cout << endl << endl;
    return 0;
}