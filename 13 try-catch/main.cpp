#include <iostream>
using namespace std;

int main()
{
    char call_api = 2;
    try
    {
        cout << "trying to use API value\n";
        cout << "did some testing with api value\n";
        throw call_api;
        cout << "NO code execute after return and throw\n";
    }
    catch (int x)
    {
        cout << "integer exception handled\n";
    }
    catch (float f)
    {
        cout << "float exception handled" << endl;
    }
    catch (...)
    {
        cout << "something went wrong" << endl;
    }
    cout << "Keep on moving with rest of code\n";
    return 0;
}