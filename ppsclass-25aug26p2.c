/*program to display the area and perimeter of a rectangle*/
#include <stdio.h>
int main(){
    /*defining variables*/
    float length;
    float breadth;

    /*asking user for dimensions*/
    printf("ENTER THE LENGTH OF THE RECTANGLE IN CM: \n");
    scanf("%f", &length);

    printf("ENTER THE BREADTH OF THE RECTANGLE IN CM: \n");
    scanf("%f", &breadth);

    float perimeter = (length+breadth)*2;
    float area = length*breadth;
    
    /*giving the output to the user*/
    printf("THE AREA OF YOUR RECTANGLE IS %.2f sq cm\n", area);
    printf("THE PERIMETER OF YOUR RECTANGLE IS %.2f sq cm\n", perimeter);

    return 0;
}