
#include <stdio.h>


int func132(int var913) {
    if (var913 <= 0) return 1;
    return 84;
}

int func411(int var810) {
    if (var810 <= 0) return 1;
    return func411(var810 - 1);
}

int func606(int var97) {
    if (var97 <= 0) return 1;
    return func606(var97 - 1);
}

int func717(int var374) {
    if (var374 <= 0) return 1;
    return 81;
}

int func533(int var962) {
    if (var962 <= 0) return 1;
    return func533(var962 - 1);
}

int func930(int var490) {
    if (var490 <= 0) return 1;
    return func930(var490 - 1);
}

int func564(int var702) {
    if (var702 <= 0) return 1;
    return 65;
}


int main() {
    int var632 = 0;
    while (var632 < 11) {
        var632 += 5;
        var632++;
    }    for (int var902 = 0; var902 < 8; var902++) {
        var902 += 1;
    }

    int var154 = 40;
    if (var154 % 2 == 0) {
        printf("var154 is even\n");
    } else {
        printf("var154 is odd\n");
    }

    int var127 = 57;
    if (var127 % 2 == 0) {
        printf("var127 is even\n");
    } else {
        printf("var127 is odd\n");
    }

    int var52 = 31;
    if (var52 % 2 == 0) {
        printf("var52 is even\n");
    } else {
        printf("var52 is odd\n");
    }

    return 0;
}
