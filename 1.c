#include <stdio.h>

double start, end, fare, distance;

int main(){
    printf("Please enter the odometer number before the trip: \n");
    scanf("%lf", &start);
    printf("Then, please enter the odometer number after the trip:\n");
    scanf("%lf", &end);

    printf("You traveled a distance of %.2lf miles. At $1.50 per mile, your fare is: %.2lf $\n", end-start, distance*1.50);
    return 0;
}