#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    int p = 0;
while ((num & 1)==0){
    num >>=1;
    p++;
}    
printf("%d",p);
    return 0;
}