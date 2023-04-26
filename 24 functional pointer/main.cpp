#include <iostream>

using namespace std;

int getTwo(){
    return 2;
}

void interseting(){
    puts("I am interseting");
}

int main()
{
    int whatIgot = getTwo();

    void (*pointsToInteresting)() = interseting;

    cout << whatIgot << endl;
    pointsToInteresting();
    (*pointsToInteresting)();

    return 0;
}