//20251030422
//fxy05.07.26@qq.com
//王鑫

#include <stdio.h>

int main() {
    int score;
    
    printf("请输入成绩: ");
    
    // 检查输入是否有效
    if (scanf("%d", &score) != 1) {
        printf("输入无效，请输入整数！\n");
        return 1;
    }
    
    // 检查成绩范围
    if (score < 0 || score > 100) {
        printf("成绩必须在0-100之间！\n");
        return 1;
    }
    
    // 完整的成绩等级判断
    if (score >= 90 && score <= 100) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else if (score >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }
    
    return 0;
}
