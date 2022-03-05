#include <stdio.h>

int main(void){
    int temp;
    int count[5];
    int array[30] = {
        1,2,3,3,3,2,2,4,1,1,
        2,4,5,5,1,2,3,3,2,1,
        3,2,1,1,2,2,4,4,5,5
    };

    for(int i=0; i<5;i++){
        count[i] = 0;
    }
    for(int i=0; i<30;i++){
        count[array[i]-1]++;
    }    
    //출력 : count[i]!=0 일 때 출력
}