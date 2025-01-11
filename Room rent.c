#include <stdio.h>
int main() {
    int month, days;
    float room_rent, total_tariff;
    scanf("%d", &month);
    scanf("%f", &room_rent);
    scanf("%d", &days);
    if (month < 1 || month > 12) {
        printf("Invalid Input\n");
        return 0;
    }
    switch(month) {
        case 4:
        case 6:
        case 11:
        case 12:
            total_tariff = room_rent * 1.2 * days; 
            break;
        default:
            total_tariff = room_rent * days;
    }
    printf("%.2f\n", total_tariff);
    return 0;
}
