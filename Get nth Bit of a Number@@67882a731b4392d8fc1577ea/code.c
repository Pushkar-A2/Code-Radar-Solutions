#include <stdio.h>

int main() {
   int num,n;
   scanf("%d %d", &num, &n);
   int bit = (num >> n) & 1;
   printf("Output the value of the nth bit(0 0r 1 ): %d\n",n,bit);
    return 0;
}