#include <stdio.h>

int main()
{
    int num, index = 0;
    printf("%s\n", "enter thr number");

    scanf("%d", &num);
    do
    {
        printf("%d\n", index + 1);
        index = index + 1;
    } while (index < num);

    return 0;
}
