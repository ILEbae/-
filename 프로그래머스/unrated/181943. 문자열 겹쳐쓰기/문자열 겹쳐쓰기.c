#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* overwrite_string, int s) {
    char *cp_string = (char*)malloc(sizeof(char)*strlen(my_string));
    char *cp_over = (char*)malloc(sizeof(char)*strlen(overwrite_string));
    strcpy(cp_string,my_string);
    strcpy(cp_over,overwrite_string);
    for(int i = 0; i<strlen(cp_over); i++){
        cp_string[s] = cp_over[i];
        s++;
        
    }
    
    
    return cp_string;
}