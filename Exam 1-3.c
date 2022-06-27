#include <stdio.h>
int main(){
    int amount;
    int sum=0, volume=1;
    int countSum = 0;
    printf("Please input the amount of number you want:");
    scanf("%d", &amount);
    int array[amount];
    for (int i=0; i<amount; i++){
        printf("Please input a number:");
        scanf("%d", &array[i]);
    }
    for (int count=0; count<amount; count++){
        if (array[count]>100 && array[count]<1000){
            countSum++;
        }
    }
    printf("The amount of number that greater than 100 and smaller than 1000 is:%d", countSum);
    return 0;
}