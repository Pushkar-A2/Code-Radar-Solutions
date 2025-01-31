#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
if(isupper(ch)){
    printf("Uppercase");
}
else if(islower(ch)){
    printf("Lowercase");
}
else{
    printf("Not an Alphabet");
}    
    return 0;
}