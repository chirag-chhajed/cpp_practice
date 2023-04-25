#include <iostream>
using namespace std;
#define PI 3.1415926

enum MsOffice: uint8_t {
   BOLD,
   ITALICS,
   UNDERLINE,
   CROSSSED = 5
};

int main(){

    int myAttributes = BOLD;

    cout << CROSSSED << endl;
    return 0;
}