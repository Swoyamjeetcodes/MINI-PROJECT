
#include <stdio.h>


int func664(int var209) {
    if (var209 <= 0) return 1;
    return 33;
}

int func764(int var911) {
    if (var911 <= 0) return 1;
    return 79;
}

int func847(int var311) {
    if (var311 <= 0) return 1;
    return func847(var311 - 1);
}

int func833(int var535) {
    if (var535 <= 0) return 1;
    return func833(var535 - 1);
}

int func740(int var768) {
    if (var768 <= 0) return 1;
    return func740(var768 - 1);
}


int main() {
    int var627 = 0;
    while (var627 < 20) {
        var627 += 5;
        var627++;
    }

    int var642 = 84;
    if (var642 % 2 == 0) {
        printf("var642 is even\n");
    } else {
        printf("var642 is odd\n");
    }

    int var355 = 58;
    if (var355 % 2 == 0) {
        printf("var355 is even\n");
    } else {
        printf("var355 is odd\n");
    }

    int var691 = 19;
    if (var691 % 2 == 0) {
        printf("var691 is even\n");
    } else {
        printf("var691 is odd\n");
    }

    return 0;
}
