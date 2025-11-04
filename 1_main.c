//2020510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    
    // 输入3×3矩阵
    printf("请输入3×3矩阵的元素（按行输入）：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // 输出矩阵
    printf("输出矩阵：\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
