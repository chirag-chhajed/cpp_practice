#include <iostream>
#include <string>
using namespace std;

int main()
{
    string my_color;
    cout << "Enter you fav. color: \n";
    getline(cin, my_color);
    cout << "Hey " << my_color << " is my fave. too" << endl;
    return 0;
}
/*
Identifiers
_ at start means private
__ means system keyword
*/