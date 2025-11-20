//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

// 使用指针实现冒泡排序
void bubbleSort(int *arr, int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        for (int j = 0; j < n - i - 1; j++) 
        {
            // 使用指针比较相邻元素
            if (*(arr + j) > *(arr + j + 1)) 
            {
                // 交换元素
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int main() 
{
    int arr[10];
    int *ptr = arr; // 定义指针指向数组
    
    printf("请输入10个整数（用空格分隔）: ");
    
    // 使用指针输入数据
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", ptr + i);
    }
    
    // 调用排序函数
    bubbleSort(arr, 10);
    
    printf("排序结果: ");
    
    // 使用指针输出排序后的结果
    for (int i = 0; i < 10; i++) 
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    
    return 0;
}
