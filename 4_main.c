//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>
int power(int a,int b)
{
    int result=1;
for (int i = 0; i < b; i++)
{
    result*=a;
}
return result;
}
int main()
{
int sum=0;
for (int i = 0; i <=5; i++)
{
    sum+=power(i,2);
}
printf("%d\n",sum);
return 0;






}
