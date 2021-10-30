//
//  insertion_sort.c
//  Sorting
//
//  Created by YeHwan on 2021/10/30.
//

#include <stdio.h>

int main(void){
    int i, j, temp, swap = 0;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
  //첫 번째 방법
    /* for(i = 0; i < 9; i++){
        j = i;
        while((array[j] > array[j+1])&& (j >0)){
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            if(j>0)
            j--;
        }
    }*/
    //두 번째 방법
    for(i = 0; i < 9; i++){
        for(j = i+1; j >=0; j--){
            if(array[j] < array[j-1]){
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
            else // 어차피 왼쪽은 정렬이 돼있기 때문
                break;
        }
    }
    
    for(i = 0; i<10; i++){
        printf("%d ",array[i]);
    }
    
    return 0;
}
