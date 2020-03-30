#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 1차 포인터 배열 
void SimpleFuncOne(int *ptr1, int *ptr2)
{
    printf("hi\n");
}
// 2차 포인터 배열
void SimpleFuncTwo(int (*ptr3)[4], int(*ptr4)[4])
{
    printf("hello\n");
}
int main()
{
    int arr1[3];
    int arr2[4];
    int arr3[3][4];
    int arr4[2][4];

    SimpleFuncOne(arr1, arr2);
    SimpleFuncTwo(arr3, arr4);

    
}
