#include <stdlib.h>

int randchar() {
    char x = (rand() % 26) + 65;

    return x;
}