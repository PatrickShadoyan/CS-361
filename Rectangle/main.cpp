#include "Rect.h"

int main() {

    ofstream x;
    int input;

    x.open("coordinates.txt");

    if(!x.is_open())
    {
        cout << "not working...?" << endl;
    }
    cout << "How many times would you like to split the rectangle? : ";
    cin >> input;
    cout << endl;

    rect test = rect(coordinate(0, 500), coordinate(1000, 500), coordinate(0,0) , coordinate(1000,0)); //rectangle of width 50 and length 100
    vector<rect> test_vector = test.Refine(input);


    for(int i = 0; i < test_vector.size(); i++)
    {
        cout << test_vector[i].getA().getX() << " " << test_vector[i].getA().getY() << endl;
        cout << test_vector[i].getB().getX() << " " << test_vector[i].getB().getY() << endl;
        cout << test_vector[i].getD().getX() << " " << test_vector[i].getD().getY() << endl; //switched point D & C otherwise excel will make a "Z" shape instead of a box (rectangle)
        cout << test_vector[i].getC().getX() << " " << test_vector[i].getC().getY() << endl;
        cout << test_vector[i].getA().getX() << " " << test_vector[i].getA().getY() << endl; //to complete the box on excel (a = top left, b = top right, c = bottom left, d = bottom right)
        cout << endl;
        x << test_vector[i].getA().getX() << " " << test_vector[i].getA().getY() << endl;
        x << test_vector[i].getB().getX() << " " << test_vector[i].getB().getY() << endl;
        x << test_vector[i].getD().getX() << " " << test_vector[i].getD().getY() << endl; //switched point D & C otherwise excel will make a "Z" shape instead of a box (rectangle)
        x << test_vector[i].getC().getX() << " " << test_vector[i].getC().getY() << endl;
        x << test_vector[i].getA().getX() << " " << test_vector[i].getA().getY() << endl; //to complete the box on excel (a = top left, b = top right, c = bottom left, d = bottom right)
        x << endl;
    }
    return 0;
}