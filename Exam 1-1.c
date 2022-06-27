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
        sum = sum + array[count];
        volume = volume * array[count];
    }
    printf("The sum of all number is:%d\n", sum);
    printf("The volume of all number is:%d\n", volume);
    return 0;
}