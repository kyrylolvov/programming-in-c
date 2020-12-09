#include<stdio.h>
#include<stdlib.h>

#define N 5

int main(){

   int nums[N];

    printf("Please enter an integer: ");
scanf("%d", &nums[0]);
printf("Please enter an integer: ");
scanf("%d", &nums[1]);
printf("Please enter an integer: ");
scanf("%d", &nums[2]);
printf("Please enter an integer: ");
scanf("%d", &nums[3]);
printf("Please enter an integer: ");
scanf("%d", &nums[4]);


    // Question 1

    int sum = nums[0] + nums[2];
    printf("\nSum of the first and the third elements of an array is: %d", sum);

    // Question 2

    nums[3] = 23;
    printf("\n\nValue of the forth element of an array is: %d", nums[3]);

    // Question 3

    for(int i = 0; i < N; i++){
        printf("Please enter an integer: ");
        scanf("%d", &nums[i]);
    }

    // Question 4

    for(int i = 0; i < N; i++){
        printf("%d", nums[i]);
        printf("\n");
    }

    // Question 5

    for (int i = N - 1; i >= 0; i--){
        printf("%d", nums[i]);
        printf("\n");
    }

    // Question 6

    for(int i = 0; i < N; i += 2){
        printf("%d", nums[i]);
        printf("\n");
    }

}


