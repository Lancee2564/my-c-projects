#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int psuedo_rand(int min, int max);

int main(void) {
    srand(time(NULL)); // Sets seed to time, same seed if two runs are done in a second

    int random = psuedo_rand(100, 200);

    printf("%d\n", random);

    return 0;
}

int psuedo_rand(int min, int max) {
    int random;
    while ((random = rand() % max) < min) {
        random = rand() % max;
    }

    return random;
}