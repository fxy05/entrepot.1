//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>
int main()
{
int arr[3][3];
int i,j;
for ( i = 0; i < 3; i++)
{
for ( j = 0; j < 3; j++)
{
 scanf("%1d",&arr[i][j]); 
}
}
for (i = 0; i < 3; i++)
{
    for ( j = 0; j <3 ; j++)
    {
        printf("%d",arr[j][i]);
    }
    printf("\n");
}

return 0;

}
