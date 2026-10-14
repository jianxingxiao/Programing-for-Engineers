#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x, y, a;
    printf("Please enter the calculation you would like to perform:\n0add\n1sub\n2mul\n3div\n");
    scanf("%d", &a);
    switch (a) {
        case 0:
            printf("输入x:");
            scanf("%d", &x);
            printf("输出y:");
            scanf("%d", &y);
            printf("x add y is %d", x + y);
            break;
        case 1:
            printf("输入x:");
            scanf("%d", &x);
            printf("输出y:");
            scanf("%d", &y);
            printf("x sub y is %d", x - y);
            break;
        case 2:
            printf("输入x:");
            scanf("%d", &x);
            printf("输出y:");
            scanf("%d", &y);
            printf("x mul y is %d", x * y);
            break;
        case 3:
            printf("输入x:");
            scanf("%d", &x);
            printf("输出y:");
            scanf("%d", &y);
            printf("x div y is %d", x / y);
            break;
        default:
            printf("Invalid input.\n");
            break;
    }
    return 0;
}