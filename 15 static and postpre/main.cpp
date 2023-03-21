#include <iostream>
using namespace std;

int lifeUp()
{
    static int life = 3;
    return ++life;
}

int main()
{
    printf("%d\n", lifeUp());
    printf("%d\n", lifeUp());
    printf("%d\n", lifeUp());
    return 0;
}
