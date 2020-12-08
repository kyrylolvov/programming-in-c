#include<stdio.h>
#include<stdlib.h>

int main()
{
    char answer;
    printf("Enter Y or N: ");
    scanf("%s", &answer);
    while (answer == 'Y'){
    printf("\nAlright then!");
    printf("\nEnter Y or N: ");
    scanf("%s", &answer);
    }

    return 0;
}
