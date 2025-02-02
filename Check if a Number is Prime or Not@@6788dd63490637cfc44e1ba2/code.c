#include <stdio.h>

int main() {
    int a,i;
    scanf("%d",&a);
// if(a > 1 && a % 1 || a % a == 0){
//     printf("Prime\n");
// }
// else{
//     printf("Not Prime\n");
// }
if ( a <= 1){
    printf("Not Prime\n");
    return 0;
}
for ( i = 2; i*i <= a; i++){
    if (a % i == 0){
        printf("Not Prime\n");
        return 0;
    }
}    
    printf("Prime\n");
    return 0;
}