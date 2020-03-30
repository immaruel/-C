#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int* arr1[5];
    int* arr2[3][5];

    int** ptr1 = arr1; // 1차원배열의 2차 포인터
    int*(* ptr2) = arr2; //  2차원배열의 2차 포인터

}
