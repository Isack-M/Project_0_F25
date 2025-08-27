#include <stdio.h>
#include <stdlib.h>

void rand_string(char *s, size_t size){
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    for(size_t i = 0; i< size, i++){
        int key = rand() % (sizeof(charset) - 1);
        s[i] = charset[key];
    }
}