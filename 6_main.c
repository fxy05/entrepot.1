//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

int main()
 {
    int nums[5];
    int count = 0;
    int num;
    
  
    while (count < 5) 
    {
        scanf("%d", &num);
        if (num % 2 == 0) 
        {  
            nums[count] = num;
            count++;
        }
  
    }
    
 
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
    
    return 0;
}
