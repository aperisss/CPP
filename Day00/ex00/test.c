#include <stdio.h>

int main()
{
    int var1, var2, temp;

    var1 = 123;
    var2 = 18;
    printf("var1= %d et var2 = %d\n", var1, var2);

    temp = var1;
    var1 = var2;
    var2 = temp;
    printf("var1 = %d et var2= %d\n", var1, var2);
    return (0);
}