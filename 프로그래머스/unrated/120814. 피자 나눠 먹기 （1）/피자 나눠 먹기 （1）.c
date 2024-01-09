#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int result=0;
    for(int i=0 ; i<=n ; i++){
        int a = i%7;
        if(a==1){
            result++;
        }
    
    }
    return result;
}