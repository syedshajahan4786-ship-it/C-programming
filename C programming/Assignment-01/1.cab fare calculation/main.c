#include <stdio.h>

int main() {
    float distance, fare = 100;
    int member;

    scanf("%f %d", &distance, &member);

    if (distance > 10) {
        fare += (distance - 10) * 20;
    }

    if (member == 1) {
        fare *= 0.9;
    }

    printf("Final Fare: %.0f\n", fare);

    return 0;
}