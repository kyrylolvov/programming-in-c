#include<stdio.h>
#include<stdlib.h>

int main()
{
    char option;
    printf("Pick your option \n a. option 1 \n b. option 2 \n q. quit \n");
    scanf("%s", &option);

    while (option != 'q'){
    printf("Pick your option \n a. option 1 \n b. option 2 \n q. quit \n");
    scanf("%s", &option);
    }


    return 0;
}
