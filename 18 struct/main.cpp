#include <iostream>
using namespace std;

struct User
{
    const int uId;
    const char *name;
    const char *email;
    int courses_count;
};




int main(){

    User mickey = {001,"Mickey","mickey@cartoon.com",2};
    User donald = {002,"Donald","donaldduck@cartoon.com ",5};

    User *d = &donald;

    cout << mickey.email << endl;
    cout << donald.name << endl;

    d->courses_count = 10;
    // mickey.email = "mickeymouse@cartoon.com"; possible becuase char's pointer is const
    // mickey.uId = 5; not possible becuase int is const

    return 0;
}