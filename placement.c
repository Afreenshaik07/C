#include <stdio.h>
void main() {
    char name[100];
    int reg,backlogs;
    float cgpa;
    scanf("%s", name);
    scanf("%d", &reg);
    scanf("%f", &cgpa);
    scanf("%d", &backlogs);
    if ((backlogs == 0 && cgpa >= 7.0) || ((backlogs == 1 || backlogs == 2) && cgpa >= 7.5))
    {
        printf("%s\n%d\nEligible to attend placement\n", name, reg);
    } else {
        printf("%s\n%d\nNot Eligible to attend placement\n", name, reg);
    }
}