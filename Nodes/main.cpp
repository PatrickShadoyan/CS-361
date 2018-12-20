#include "nodes.h"

int* BFS(node n[], int first, int size);
void shortest_path(int * x, int begin, int end, int in);
void display(node * n, int input);
int main() {

    default_random_engine engine(time(NULL)); //Need to research why I was using a pointer to this, Mr. Morris Sir explained but I have forgotten

    int in;
    int in_first;
    int in_second;
    vector<node*> replace;
    queue<int> q;
    int connections;

    cout << "How many nodes would you like to create? : ";
    cin >> in;
    cout << endl;

    while (in <= 5)
    {
        cout << "Oh too bad, needs to be a bigger number...try again: ";
        cin >> in;
        cout << endl;
    }
    cout << "Choose two numbers between 1 to " << in << " :" << endl;
    cin >> in_first;
    cout << "and : ";
    cin >> in_second;

    while (in_first > in || in_first < 1 || in_first > in_second || in_second > in || in_second < 1)
    {
        cout << "Try again" << endl;
        cout << "Choose a range given numbers from 1 to " << in << " :" << endl;
        cin >> in_first;
        cout << "and : ";
        cin >> in_second;
    }

    node n[in];

    for(int i = 0; i < in; i++)
    {
        uniform_int_distribution<int> x(0, 50);
        uniform_int_distribution<int> y(0, 50);
        n[i].setId(i);
        n[i].setPosition(coordinate(x(engine), y(engine)));
    }
    for(int i = 0; i < in; i++)
    {
        uniform_int_distribution<int> node_connections(1, 5);
        connections = node_connections(engine);
        for (int j = 0; j < connections; j++)
        {
            uniform_int_distribution<int> node_pointers(0, in-1);
            replace.push_back(&n[node_pointers(engine)]);
        }
        n[i].setX(replace);
        replace.clear();
    }
    display(n, in);
    shortest_path(BFS(n, in_first, in), in_first-1, in_second-1, in);

    return 0;
}
void display(node n[], int input)
{
    cout << "Node print-out is in terms of indices, so node 1 is shown as node 0, as well as their children." << endl << endl;
    vector<node*> temp;
    for(int i = 0; i < input; i++)
    {
        cout << "Node #: " << n[i].getId() << endl;
        cout << "Located at: (" << n[i].getPosition().getX() << "," << n[i].getPosition().getY() << ")" << endl;
        cout << "Connected to: ";
        for(int j = 0; j < n[i].getX().size(); j++)
        {
            temp = n[i].getX();
            cout << temp[j]->getId() << " ";
        }
        cout << endl << endl;
    }
}
int* BFS(node n[], int first, int size)
{
    cout << "Node print-out is in terms of indices, so node 1 is shown as node 0, as well as their children." << endl << endl;
    bool *visited = new bool[size];
    int * prev = new int[size];
    list<int> queue;
    vector<node*> temp;

    int first_one;
    int new_size;


        for (int j = 0; j < size; j++) {
            visited[j] = false;
            prev[j] = -1;
        }
        visited[first-1] = true;
        queue.push_back(first-1);
        cout << "Starter node:" << first-1 << endl;

    while(!queue.empty())
    {
        first_one = queue.front();
        cout << "Node: " << queue.front() << endl;
        queue.pop_front();

        new_size = n[first_one].getX().size();
        for(int i = 0; i < new_size; i++)
        {
            temp = n[first_one].getX();
            cout << "----------- " << temp[i]->getId() << endl;
            if(!visited[temp[i]->getId()])
            {
                visited[temp[i]->getId()] = true;
                prev[temp[i]->getId()] = first_one;
                queue.push_back(temp[i]->getId());
            }
        }
    }
    return prev;
}
void shortest_path(int * x, int begin, int end, int in)
{
    cout << endl;
    cout << "Using BFS algorithm, backtracking to get the shortest path, this took a hell of a long time to figure out but I'm glad I chose this problem to do, since I had no idea what I was doing going into it." << endl;
    int temp = end;
    vector<int> backwards_path;
    int temp2;

    for(int i = 0; i < in; i++)
    {
        if(temp == begin)
        {
            break;
        }
        temp = x[temp];
        backwards_path.push_back(temp);
    }
    cout << endl;

    cout << "Path from " << begin +1 << " to " << end+1 << " is: ";
    for(int i = backwards_path.size()-1; i >= 0; i--)
    {
        cout << backwards_path[i]+1 << ", ";
    }
    cout << end+1 << endl;

}