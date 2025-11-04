//202510304222
//fxy05.07.26@qq.com
//王鑫
#include<stdio.h>
int arithmeticSum(int a1,int an,int step)
{
    int n=(an-a1)/step + 1;
    return n*(a1 + an) / 2;
}
int main()
{
    int result =arithmeticSum(1,100,1);
    printf("%d\n",result);
    return 0;
}
