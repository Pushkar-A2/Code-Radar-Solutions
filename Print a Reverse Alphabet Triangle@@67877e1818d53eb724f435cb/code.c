#include <stdio.h>
int main(){
    int a;
    char ch;
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        ch='A';
        for(int j=1;j<=i;j++){
            printf("%c ",ch++);
        }
        printf("\n");
    }
    return 0;
}