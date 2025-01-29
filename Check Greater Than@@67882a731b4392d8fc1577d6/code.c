#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    bool isGreater = num1 > num2;
if (isGreater){
        printf("True\n");
    }
else{
        printf("False\n");
    }
    return 0;
}