//20251030422
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

// 使用指针作为参数实现两个整数的交换
void swap(int *a, int *b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    int num1, num2;
    
    
    printf("请输入第一个整数: ");
    scanf("%d", &num1);
    
    printf("请输入第二个整数: ");
    scanf("%d", &num2);
    

    printf("交换前: num1 = %d, num2 = %d\n", num1, num2);
    
    
    swap(&num1, &num2);
    
    
    printf("交换后: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
