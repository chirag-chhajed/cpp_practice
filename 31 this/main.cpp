#include <iostream>
#include <string>
using namespace std;

class Phone
{
    string _name = "";
    string _os = "";
    int _price = 0;

public:
    Phone();                                                       // default constructor
    Phone(const string &name, const string &os, const int &price); // parameter constructor
    Phone(const Phone &);                                          // copy constructor
    string getName() { return _os; }
    int getPrice();
    ~Phone(); // destructor
};

int Phone::getPrice()
{
    printf("Value of getPrice is %p\n", this);
    return _price;
}

Phone::Phone() : _name(), _os("Andy"), _price()
{
    puts("Default constructor");
}
Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price)
{
    puts("this is parameter constructor");
}
Phone::Phone(const Phone &values)
{
    puts("OVERWRITE copy constructor");
    _name = values._name;
    _os = "skinned_" + values._os;
    _price = values._price;
}
Phone::~Phone()
{
    printf("Destructor called for %s\n", _name.c_str());
}
int main()
{
    Phone samsungA1;
    cout << samsungA1.getName() << endl;

    Phone OnePlus10("OP8", "Oxygen OS", 800);
    cout << OnePlus10.getName() << endl;

    printf("Value ofobject is %p\n", &OnePlus10);

    cout << OnePlus10.getPrice() << endl;

    Phone OnePlus10R = OnePlus10;
    cout << OnePlus10R.getName() << endl;

    return 0;
}