#include <stdio.h>
int main(int argc, char const *argv[])
{
    printf("the  value of  argc is %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("the value at %d of agrv is %s\n", i, argv[i]);
    }

    return 0;
}
