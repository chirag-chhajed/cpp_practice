#include <iostream>
using namespace std;

int main()
{
    int life;
    life = 4;

    int card;
    card = 40;
    int my_card = card;

    int *myp;
    myp = &card;

    my_card = *myp; // pointer deref

    printf("%d\n", my_card);
    printf("%p\n", myp);
    printf("%d\n", my_card);

    return 0;
}
