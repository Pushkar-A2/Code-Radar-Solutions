#include <stdio.h>


int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    bool is greater = num1 > num2;
    if (is greater){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}