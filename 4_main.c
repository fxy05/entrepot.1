//20251030422
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

void increment(int *arr, int len) 
{
    for (int i = 0; i < len; i++) 
    {
        (*(arr + i))++;  // 等价于 arr[i]++
    }
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    increment(arr, 5);  // 数组名本身是指针
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
