#include <stdio.h>

void decimalToBinary(int n){
    int binary[32];
    int i = 0;
    while(n>>0){
        binary[i] = n & 1;
        n = n >> 1;
        i++;
    }
    for(int j = i - 1; j >= 0; j--){
        printf("%d",binary[j]);
    }
}
int main(){
    int num;
    scanf("%d",&num);
    printf("Enter a decimal number: ")
    
    return 0;
}
