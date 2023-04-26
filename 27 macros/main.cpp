#include <iostream>
#include <string>

#define end return 0
#define endmessage cout << "Program ends here\n"

#define LCOINT int32_t
#define LCOCCPC const char *const
#define console_log(a) cout << a << endl


using namespace std;

int main()
{

    LCOINT a = 4;
    std::cout << a << std::endl;

    int score = 400;
    console_log(score);

    string name = "hitesh";
    console_log(name);

    endmessage;
    end;
}