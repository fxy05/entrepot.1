//20251030422
//fxy05.07.26@qq.com
//王鑫
#include<stdio.h>
int main()
{
 int first=1;   
int num=100;
while (num<=999)
{
    int a=num/100;
    int b=num/10%10;
    int c=num%10;

if(a*a*a+b*b*b+c*c*c==num)
{
    if(!first)
{
printf("");
}
printf("%d ",num);
first=0;
}
num++;
}
return 0;
}
