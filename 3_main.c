//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>


int is_prime(int n) 
{
    if (n <= 1)
    {
        return 0;  
    }
    if (n == 2)
    {
        return 1; 
    }
    int i=2;
    while (i<n)
    {
        if(n%i==0)
        {
            return 0;
        }
        i++;
    }
    return 1;
    
  
}

int main()
{
    int n;
    
    
    scanf("%d", &n);
    
   
    if (is_prime(n))
    {
        printf("密钥安全，密码设置成功\n");
    }
     else
    {
        printf("密钥不安全，请重新输入\n");
    }
    
    return 0;
}
