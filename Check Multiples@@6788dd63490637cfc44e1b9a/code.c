#include <stdio.h>

int main() {
    int num, divisor;
    scanf("%d %d",&num,&divisor);
if(divisor !=0 && num % divisor == 0){
    printf("Yes\n");
}
else{
    printf("No\n");
}    
    return 0;
}