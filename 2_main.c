//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

int main() 
{
    int arr[5];
    int *p;
    int i;
    
    // 输入5个整数到数组arr
    for(i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    // 使用指针将数组中所有元素乘以2
    p = arr;  // 指针指向数组首元素
    for(i = 0; i < 5; i++) 
    {
        *(p + i) = *(p + i) * 2;
    }
    
    // 打印处理后的数组
    for(i = 0; i < 4; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[4]);
    
    return 0;
}
