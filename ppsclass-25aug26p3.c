/*simple interest calculation*/
#include <stdio.h>
int main(){
    /*initial variables*/
    float tim;
    float perc;
    float princ;

    /*prompting the user*/
    printf("Enter the prinicipal amount in rupees: \n");
    scanf("%f", &princ);
    printf("Enter the time in years: \n");
    scanf("%f", &tim);
    printf("Enter the rate of interest: \n");
    scanf("%f", &perc);

    /*later variables*/
    float simpintamt = (tim*perc*princ) / 100;
    float totamtowed = princ+simpintamt;

    /*printing the results*/
    printf("\tThe amount of interest owed by you is %f\n", simpintamt);
    printf("\tThe total amount to be paid is %f\n", totamtowed);

    return 0;
}