#include <iostream>
#include <string>
#include <memory>
using namespace std;

class User
{
public:
    User()
    {
        cout << "User created" << endl;
    }
    ~User()
    {
        cout << "User destroyed" << endl;
    }
    void testFunc()
    {
        cout << "I am a test function" << endl;
    }
};

int main()
{
    {
        // unique_ptr<User> sam(new User()); non fav. way of developers
        unique_ptr<User> sam = make_unique<User>();
        sam->testFunc();

        // unique_ptr<User> samm = sam; // Not allowed
    }
    {
        // shared_ptr<User> tim(new User());
        shared_ptr<User> tim = make_shared<User>();
        shared_ptr<User> timm = tim;
    }
    cout << "outside code";
    return 0;
}

// user g++ -std=c++14 in cmd