#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int flag = 0;
    for (int i = 31; i>=0 ;1--){
        if(n&(1<<i)){
            flag = 1;
        printf("1");    
        }
        else if(flag){
            printf("0");

        }
    }
    if(!flag)
    printf("0");
    printf("\n");
    return 0;

}
    

