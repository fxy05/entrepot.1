//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>
#include <stdlib.h>  // 包含malloc和free函数的头文件

int main() 
{
    int *ptr;  // 定义整型指针
    
    // 使用malloc动态申请存储5个整数的内存空间
    ptr = (int*)malloc(5 * sizeof(int));
    
    // 注意：实际应用中需要判断内存分配是否成功，这里按题目要求简化处理
    
    printf("请输入5个整数: ");
    
    // 通过指针操作将输入值存入动态内存
    for(int i = 0; i < 5; i++) 
    {
        scanf("%d", ptr + i);  // 使用指针算术运算
    }
    
    printf("输出: ");
    
    // 遍历打印所有元素
    for(int i = 0; i < 5; i++) 
    {
        printf("%d", *(ptr + i));  // 使用指针解引用访问元素
    }
    printf("\n");
    
    // 使用free释放动态分配的内存，避免内存泄漏
    free(ptr);
    
    return 0;
}
