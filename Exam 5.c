#include<stdio.h>
int main(){
    int MainArray[10], temp;
    for (int ArrayCount=0; ArrayCount<10; ArrayCount++){
        printf("Please input a number for the array:");
        scanf("%d", &MainArray[ArrayCount]);
    }
    for (int i=0; i<9; i++){
        for(int j=0; j<10-i-1; j++){
            if(MainArray[j]>MainArray[j+1]){
                temp = MainArray[j];
                MainArray[j] = MainArray[j+1];
                MainArray[j+1]=temp;
            }
        }
    }
    printf("\nThe array after being sorted is:\t");
    for (int count=0; count<10; count++){
        printf("%d\t", MainArray[count]);
    }
    int InputNumber, ArrayAddress;
    printf("\nPlease input the number you want to insert:");
    scanf("%d", &InputNumber);
    printf("\nPlease input the address in the array:");
    scanf("%d", &ArrayAddress);
    MainArray[ArrayAddress] = InputNumber;
    printf("\nThe array after being changed is:\t");
    for(int CountA=0; CountA<10; CountA++){
        printf("%d\t", MainArray[CountA]);
    }
    return 0;
}