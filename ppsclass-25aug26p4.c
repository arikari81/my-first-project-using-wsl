/*celcius to farenheit*/
#include <stdio.h>
int  main(){
    float celcius;
    printf("ENTER THE TEMPERATURE IN DEGREE CELCIUS: \n");
    scanf("%f", &celcius);
    float farenheit = (celcius*1.8) + 32;
    printf("The converted temperature in degrees farenhit is %.2f\n", farenheit);
    
    return 0;

}