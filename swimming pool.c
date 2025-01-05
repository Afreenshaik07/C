#include <stdio.h>

int main() {
    int side_length, liters;
    scanf("%d", &side_length);
    scanf("%d", &liters);

    int volume = side_length * side_length * side_length; 
    int volume_liters = volume * 1000; 

    if (liters <= volume_liters) {
        printf("Can store\n");
    } else {
        printf("Cannot store\n");
    }

    return 0;
}