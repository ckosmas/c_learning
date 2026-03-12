#include <stdio.h>

// int result = 0;  global scope (harder to debug)

int add(int x, int y){
    int result = x + y;
    return result;
}

int subtract(int x, int y){
    int result = x - y;
    return result;
}

int main (){
    int x = 5;
    int y = 6;
    int result = subtract();
    printf("%d", result);

    return 0;
}
