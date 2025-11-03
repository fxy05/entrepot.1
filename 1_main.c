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
    char col[4];
    scanf("%s",col);

for ( j = 0; j < 3; j++)
{
   arr[i][j]=col[j]-'0';
}
}
for (i = 0; i < 3; i++)
{
    for ( j = 0; j <3 ; j++)
    {
        printf("%d",arr[i][j]);
    }
    printf("\n");
}

return 0;

}
