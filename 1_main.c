//202510304222
//fxy05.07.26@qq.com
//王鑫
#include <stdio.h>

int main()
{
    int a;
    int *p;
    
    // 输入整数a并赋值
    scanf("%d", &a);
    
    // 定义指针p指向a
    p = &a;
    
    // 通过指针修改a的值（使a的值加10）
    *p = *p + 10;
    
    // 分别打印a的值和指针指向的值
    printf("%d,%d\n", a, *p);
    
    return 0;
}
