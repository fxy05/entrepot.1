//20251030422
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>
int main() 
{
    int arr[5];
    int sum = 0;
    
    
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    arr[4] = sum;
    
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
