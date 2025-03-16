
#include <stdio.h>


int func514(int var481) {
    if (var481 <= 0) return 1;
    return 11;
}

int func528(int var163) {
    if (var163 <= 0) return 1;
    return func528(var163 - 1);
}

int func804(int var701) {
    if (var701 <= 0) return 1;
    return func804(var701 - 1);
}

int func178(int var683) {
    if (var683 <= 0) return 1;
    return func178(var683 - 1);
}


int main() {
    int var482 = 0;
    while (var482 < 9) {
        var482 += 2;
        var482++;
    }    for (int var519 = 0; var519 < 15; var519++) {
        var519 += 3;
    }

    int var517 = 16;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    int var324 = 88;
    if (var324 % 2 == 0) {
        printf("var324 is even\n");
    } else {
        printf("var324 is odd\n");
    }

    int var535 = 33;
    if (var535 % 2 == 0) {
        printf("var535 is even\n");
    } else {
        printf("var535 is odd\n");
    }

    return 0;
}
