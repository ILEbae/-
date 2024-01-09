#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int arr[] = {0};
    int size=0;
    for(int i=1 ; i<=n; i++){
        arr[n] = i;
        if(arr[n]%2!=0){
            size++;
        }
    }
    int* answer = (int*)malloc(sizeof(int)*size);
    
    for(int i=0 , j=1; i<size; i++, j+=2){
        arr[i] = j;
        answer[i] = arr[i];
    }
     for(int i=0 ; i<size; i++){
        printf("%d ",answer[i]);
    }

    
    return answer;
}