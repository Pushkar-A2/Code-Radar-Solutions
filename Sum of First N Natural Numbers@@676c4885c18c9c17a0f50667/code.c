#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int sum=0;
    for(i = 1; i<=num; i++){
        sum += i;
    }
    printf("%d",sum);
}