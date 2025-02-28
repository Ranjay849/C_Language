// What will be the value stored in the variable x after executing following statement: x=3<0&&5>0;

#include <stdio.h>

int main()
{
    int x = 3<0 && 5>0;
    printf("%d", x);
    return 0;
}