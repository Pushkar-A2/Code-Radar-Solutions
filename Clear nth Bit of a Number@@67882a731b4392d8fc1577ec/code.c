#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d",&num,&n);
    int c = ~(1 << n);
    num = num & c;
    printf("%d",num);
    return 0;
}