#include <stdio.h>
#define gravity 9.80
#define efficiency 0.9
#define density 1000

double work, height, flow; 
int main(){
    printf("Please enter the height of the dam in meters: \n");
    scanf("%lf", &height);
    printf("Then, please enter the cubic meters of water that are projected to flow from the top to the bottom of the dam:\n");
    scanf("%lf", &flow);
    
     printf("The estimated power produced is %.2lf MW", flow*density*height*gravity*efficiency/1000000);
    return 0;

}