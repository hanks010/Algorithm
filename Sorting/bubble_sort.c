//
//  Bubble_sort.c
//  Sorting
//
//  Created by YeHwan on 2021/10/29.
//

#include <stdio.h>

int main(void){
    int i, j, temp, swap = 0;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
   
    for(i =0; i<10; i++){
        for(j = 0; j<9 - i; j++){ //데이터 개수 - i - 1
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                swap = 1;
            }
        }
        if(swap == 0){
            break;
        }
    }
    
    for(i = 0; i < 10; i++){
        printf("%d ",array[i]);
    }
    
    return 0;
}
