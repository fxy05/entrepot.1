//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

int array_sum(int arr[], int length) 
{
    int sum = 0;
    for (int i = 0; i < length; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

int array_product(int arr[], int length) 
{
    int product = 1;
    for (int i = 0; i < length; i++) 
    {
        product *= arr[i];
    }
    return product;
}

int main() 
{
    int arr[5];
    
    
    printf("请输入5个整数：\n");
    for (int i = 0; i < 5; i++) 
    {
        scanf("%d", &arr[i]);
    }
    

    int sum = array_sum(arr, 5);
    int product = array_product(arr, 5);
    
    printf("数组元素的和：%d\n", sum);
    printf("数组元素的积：%d\n", product);
    
    return 0;
}
