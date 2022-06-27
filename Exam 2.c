#include<stdio.h>
int main(){
    int MainArray[10];
    int MaxValue=MainArray[0];
    for (int count=0; count<10; count++){
        printf("Please input a number for the array:");
        scanf("%d", &MainArray[count]);
    }
    for (int CountA=0; CountA<10; CountA++){
        if (MainArray[CountA]%2==1){
            MainArray[CountA]=NULL;
        }
    }
    for (int CountB=0; CountB<10; CountB++){
        if (MaxValue>MainArray[CountB]){
            MaxValue=MainArray[CountB];
        }
    }
    printf("The maximum even value is:%d", MaxValue);
    return 0;
}