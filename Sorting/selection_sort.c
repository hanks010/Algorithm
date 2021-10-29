//
//  선택정렬
//
//  Created by YeHwan on 2021/10/29.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i, j, min, index, temp;
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    for(i = 0; i< 10; i++){
        min =9999; //맨 처음에는 큰 숫자로 정해둠
        
        //최솟값을 구하는 과정
        for(j = i; j < 10; j++){
            if(min > array[j]){
                min = array[j];
                index = j;
            }
        }
        // 구해진 최솟값을 앞으로 보내는 과정
        temp = array[i];
        array[i] = array[index];
        array[index]= temp;
    }
    
    for(i =0; i< 10; i++){
        printf("%d ", array[i]);
    }
    
    return 0;
}
