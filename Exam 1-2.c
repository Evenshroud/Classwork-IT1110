#include <stdio.h>
int main(){
    int amount;
    int sum=0, volume=1;
    printf("Please input the amount of number you want:");
    scanf("%d", &amount);
    int array[amount];
    for (int i=0; i<amount; i++){
        printf("Please input a number:");
        scanf("%d", &array[i]);
    }
    for (int count=0; count<amount; count++){
        if (array[count]>10 && array[count] %3==0){
            printf("The number that both bigger than 10 and divisible by 3 is:%d\n", array[count]);
        }
    }
}