//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>
int main()
{
int arr[10];
for (int i = 0; i < 10; i++)
{
    scanf("%1d",&arr[i]);
}
for (int i = 0; i < 9; i++)
{
    for (int j = 0; j <9-i ; j++)
    {
        if (arr[j+1]<arr[j])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr [j+1]=temp ;
        }   
    }
}
for ( int i = 0; i < 10; i++)
{
    printf("%d ",arr[i]);
}
printf("\n");

return 0;



}
