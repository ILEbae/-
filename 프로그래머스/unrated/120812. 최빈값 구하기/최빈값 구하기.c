#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int maxArr[1000]={0};
    int max=0;
    int answer=0;
    for(int i=0; i<array_len; i++)
        maxArr[array[i]]++;
   
    for(int i=1; i<1000; i++)
    {   
        if(maxArr[max]<maxArr[i])
            max = i;
        else if(maxArr[max] == maxArr[i])
            max = -1;
    }

    answer = max;
    return answer;
        
}