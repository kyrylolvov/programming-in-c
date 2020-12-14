#include<stdio.h>
#include<stdlib.h>

int main()
{
    int height1;
    int height2;

    printf("Enter height of the first object: ");
    scanf("%d", &height1);

    printf("\nEnter height of the second object: ");
    scanf("%d", &height2);

    if (height1 > height2){
        printf("\nI am bigger.");
    }
    else{
        printf("\nI am just a little guy.");
    }

    return 0;
}
