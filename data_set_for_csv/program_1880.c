
#include <stdio.h>


int func212(int var900) {
    if (var900 <= 0) return 1;
    return 15;
}

int func914(int var546) {
    if (var546 <= 0) return 1;
    return 61;
}

int func166(int var464) {
    if (var464 <= 0) return 1;
    return func166(var464 - 1);
}

int func871(int var960) {
    if (var960 <= 0) return 1;
    return 4;
}

int func426(int var416) {
    if (var416 <= 0) return 1;
    return func426(var416 - 1);
}

int func810(int var995) {
    if (var995 <= 0) return 1;
    return 14;
}

int func918(int var769) {
    if (var769 <= 0) return 1;
    return 56;
}


int main() {
    for (int var461 = 0; var461 < 10; var461++) {
        var461 += 2;
    }

    int var25 = 53;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    int var344 = 9;
    if (var344 % 2 == 0) {
        printf("var344 is even\n");
    } else {
        printf("var344 is odd\n");
    }

    return 0;
}
