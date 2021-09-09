#include <stdio.h>

float start, end;

int main(){
    printf("Please enter the odometer number before the trip: \n");
    scanf("%f", &start);
    printf("Then, please enter the odometer number after the trip:\n");
    scanf("%f", &end);

    printf("You traveled a distance of %.2f miles. At $1.50 per mile, your fare is: %.2f $\n", end-start, (end-start)*1.50);
    return 0;
}