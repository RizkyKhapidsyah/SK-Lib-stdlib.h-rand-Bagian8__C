#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    srand(time(NULL));
    int random_variable = rand();
    printf("Random value on [0,%d]: %d\n", RAND_MAX, random_variable);

    for (int n = 0; n != 20; ++n) {
        int x = 7;

        while (x > 6) {
            x = 1 + rand() / ((RAND_MAX + 1u) / 6);
        }
            
        printf("%d ", x);
    }

    _getch();
    return 0;
}