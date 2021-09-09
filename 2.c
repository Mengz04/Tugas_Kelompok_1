#include <stdio.h>
#define gravity 9.80
#define efficiency 0.9
#define density 1000

float work, height, flow; 
int main(){
    printf("Please enter the height of the dam in meters: \n");
    scanf("%f", &height);
    printf("Then, please enter the cubic meters of water per secon that are projected to flow from the top to the bottom of the dam:\n");
    scanf("%f", &flow);
    
     printf("The estimated power produced is %.2f MW/s", flow*density*height*gravity*efficiency/1000000);
    return 0;
}