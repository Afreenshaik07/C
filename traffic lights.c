#include <stdio.h>
int main() {
    float speed, distance,time;
    scanf("%f", &speed);
    scanf("%f", &distance);
    scanf("%f", &time);
    float speed_per_second = speed / 3600.0;
    float time_to_reach_light = distance / speed_per_second;
    if (time_to_reach_light <= time) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

