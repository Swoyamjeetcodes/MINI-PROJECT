
#include <stdio.h>


int func306(int var782) {
    if (var782 <= 0) return 1;
    return func306(var782 - 1);
}

int func905(int var831) {
    if (var831 <= 0) return 1;
    return func905(var831 - 1);
}


int main() {
    int var603 = 0;
    while (var603 < 8) {
        var603 += 3;
        var603++;
    }

    int var504 = 44;
    if (var504 % 2 == 0) {
        printf("var504 is even\n");
    } else {
        printf("var504 is odd\n");
    }

    int var605 = 18;
    if (var605 % 2 == 0) {
        printf("var605 is even\n");
    } else {
        printf("var605 is odd\n");
    }

    return 0;
}
