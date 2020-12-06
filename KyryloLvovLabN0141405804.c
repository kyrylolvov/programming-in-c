#include<stdio.h>
#include<stdlib.h>

int main()
{
                                /* Problem 1 */

                        /* Variables Declaration */
    int firstInt;
    float secondReal;
    int studentId = 100 + 58;

                            /* Input part */

    printf("Please enter an integer number and a real number ");
    scanf("%d%f", &firstInt, &secondReal); /* Getting two inputs from the user in one line */
    printf("\n");

        if(firstInt + secondReal > studentId){
            printf("The sum of the numbers you entered is larger");
        }
        else{
            printf("The sum of the numbers you entered is smaller");
        }
     printf("\n");


                                /* Problem 2 */

                            /* Variables Declaration */

    int shareNumber;
    float comission;

                            /* Input and output part */

    printf("Enter the number of shares you would like to trade: ");
    scanf("%d", &shareNumber);
    printf("\n");

        if (shareNumber < 1001 && shareNumber > 01){
            printf("Your commission would be $29.94");
        }
        else if (shareNumber > 1000 && shareNumber < 4001){
            comission = 0.03 * shareNumber;
        printf("Your commission would be: %.2f",comission);
        }
        else if (shareNumber > 4000 && shareNumber < 10001){
            comission = 0.02 * shareNumber;
        printf("Your commission would be: %.2f",comission);
        }
        else if (shareNumber > 10000){
            comission = 0.01 * shareNumber;
        printf("Your commission would be: %.2f",comission);
        }
        else{
             printf("You have entered an invalid value");
        }

    return 0;

}
