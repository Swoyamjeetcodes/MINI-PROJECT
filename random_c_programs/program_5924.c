
#include <stdio.h>


int func96(int var993) {
    if (var993 <= 0) return 1;
    return func96(var993 - 1);
}

int func479(int var685) {
    if (var685 <= 0) return 1;
    return 36;
}


int main() {
    for (int var150 = 0; var150 < 9; var150++) {
        var150 += 2;
    }    for (int var155 = 0; var155 < 9; var155++) {
        var155 += 2;
    }

    int var49 = 33;
    if (var49 % 2 == 0) {
        printf("var49 is even\n");
    } else {
        printf("var49 is odd\n");
    }

    int var125 = 56;
    if (var125 % 2 == 0) {
        printf("var125 is even\n");
    } else {
        printf("var125 is odd\n");
    }

    int var476 = 10;
    if (var476 % 2 == 0) {
        printf("var476 is even\n");
    } else {
        printf("var476 is odd\n");
    }

    return 0;
}
