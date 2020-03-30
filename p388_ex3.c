#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void SimpleFuncOne(int **ptr1,int  *(*ptr2)[5])
{
    printf("hi\n");
}
void SimpleFuncTwo(int ***(ptr3),int ***(*ptr4)[5])
{
    printf("hello\n");
}
int main()
{
    int *arr1[3]; // 1차원 싱글포인터배열
    int *arr2[3][5]; // 2차원 싱글포인터배열
    int **arr3[3]; //  1차원  더블포인터배열
    int ***arr4[3][5]; // 2차원 트리플포인터배열

    SimpleFuncOne(arr1, arr2);
    SimpleFuncTwo(arr3, arr4);
}
