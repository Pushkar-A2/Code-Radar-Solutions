#include <stdio.h>

int main() {
    int year;
    scanf("%d",&year);
if(( year % 4 == 0 || year % 100 != 0) && (year % 400 == 0)){
    printf("%d is a Leap Year");
}
else{
    printf("%d is not a Leap Year");
}    
    return 0;
}