#include<stdio.h>
int main(){
    int a;
    int i,j;
    scanf("%d",&a);
    for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}