#include<stdio.h>
int main(){
    int Array[10];
    for(int ArrayCount=0; ArrayCount<10; ArrayCount++){
        printf("Please input an integer for the array:");
        scanf("%d", &Array[ArrayCount]);
    }
    int AnsCount = 0;
    for (int i=1; i<10; i++){
        int CalculatedValue = (Array[i-1]+Array[i+1])/2;
        if(Array[i]==CalculatedValue){
            AnsCount = AnsCount + 1;
        }
    }
    printf("All the number that follows the request is:%d", AnsCount);
    return 0;
}