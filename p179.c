#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int num;
    char c;
    printf("정수입력 : ");
    scanf("%d", &num);

    while (scanf("%c", &c))
    {
        if(num < 0)
            printf("입력된 값은 0보다 작다. \n");
        if(num > 0)
            printf("입력된 값은 0보다 크다. \n");
        if(num == 0)
            printf("입력된 값은 0이다. \n");
    }
}
