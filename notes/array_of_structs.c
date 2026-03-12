#include <stdio.h>

typedef struct{
    char model[25];
    int year;
    int price;
}Car;

int main (){

    Car cars[] = {{"Mustang", 2025, 32000}, 
                  {"Corvette", 2020, 68000},
                  {"Bugatti", 2026, 1000000}};

    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < number; i++){
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}
