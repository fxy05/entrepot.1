//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

// 自定义函数：通过指针操作实现数组元素后移
void shiftArray(int *ptr_arr, int len)
{
    // 从后往前移动元素，避免覆盖
    for (int i = len - 1; i > 0; i--) 
    {
        *(ptr_arr + i) = *(ptr_arr + i - 1);
    }
    // 数组第一个位置补0
    *ptr_arr = 0;
}

int main() {
    int arr[5]; // 长度为5的整型数组
    int len = 5;
    
    printf("请输入5个整数: ");
    
    // 输入数组元素
    for (int i = 0; i < len; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    // 调用自定义函数进行数组后移操作
    shiftArray(arr, len);
    
    printf("输出: ");
    
    // 输出移动后的数组
    for (int i = 0; i < len; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
