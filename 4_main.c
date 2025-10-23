//20251030422
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

int main() {
    int a, b, c;
    
    // 输入三个整数
    printf("请输入三个整数（代表三条线段长度）：");
    scanf("%d %d %d", &a, &b, &c);
    
    // 判断能否组成三角形
    if ((a + b > c) && (a + c > b) && (b + c > a)) 
    {
        printf("可以组成三角形\n");
    } 
    else 
    {
        printf("不能组成三角形\n");
    }
    
    return 0;
}








