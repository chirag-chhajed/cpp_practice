#include <iostream>
#include <string>

using namespace std;

class User
{
    int secret = 22;

public:
    string name = "default";
    void classMessage();
    void setSecret(const int &newsecret)
    {
        secret = newsecret;
    }
    int getSecret() const;
};

void User::classMessage()
{
    cout << "Class is great, " << name << endl;
}
int User::getSecret() const
{
    return secret;
}

int main()
{
    User sam;
    sam.name = "sam";
    sam.classMessage();
    sam.setSecret(333);
    cout << sam.getSecret() << endl;

    User hitesh;
    hitesh.classMessage();
    hitesh.name = "hitesh";
    hitesh.classMessage();
   

    const User rock;
    cout << rock.getSecret() << endl;

    User peter = sam;

    cout << peter.getSecret() << endl; 
    return 0;
}