#include <iostream>

using namespace std;

int main()
{
    int my_nums[] = {2, 3, 4, 5, 6};

    for (int i = 0; i < 5; i += 1)
    {
        cout << "the number is:" << my_nums[i] << endl;
    }
    printf("Get a break\n");

    for (int i : my_nums)
    {
        cout << i << endl;
    }

    return 0;
}