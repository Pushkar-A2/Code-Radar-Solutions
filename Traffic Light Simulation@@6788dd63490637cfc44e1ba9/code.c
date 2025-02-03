#include <stdio.h>

int main() {
    char traffic_light;
    scanf("%c",&traffic_light);
    switch(traffic_light){
        case 'R':
        printf("Stop");
        break;

        case 'G':
        printf("Go")
        break;

        case 'Y':
        printf("Slow Down");
        break;

        default:
        printf("Invalid input");
        break;
    }
    return 0;
}