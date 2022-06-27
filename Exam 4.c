#include<stdio.h>
int main(){
    int array[10];
    int MinValue;
    for (int CountA=0; CountA<10; CountA++){
        printf("Please input a number for the array:");
        scanf("%d", &array[CountA]);
    }
    MinValue = array[0];
    for (int CountB=0; CountB<10; CountB++){
        if(MinValue>array[CountB]){
            MinValue=array[CountB];
        }
    }
    printf("The minimum value is:%d", MinValue);
    for (int CountC=0; CountC<10; CountC++){
        if (MinValue==array[CountC]){
            printf("The address of the value equal to minimum is:%d\n", CountC+1);
        }
    }
    return 0;
}