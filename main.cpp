#include <iostream>
using namespace std;

int main()
{
    int *myp;
    try
    {
        myp = new int[10000];
        cout << "Memory space allocation\n";
    }
    catch (...)
    {
        cout << "failed in allocating memory\n"
             << endl;
    }

    delete[] myp;

    return 0;
}