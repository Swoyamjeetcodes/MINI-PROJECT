
#include <stdio.h>


int func887(int var585) {
    if (var585 <= 0) return 1;
    return 40;
}

int func318(int var40) {
    if (var40 <= 0) return 1;
    return func318(var40 - 1);
}

int func743(int var385) {
    if (var385 <= 0) return 1;
    return func743(var385 - 1);
}

int func331(int var199) {
    if (var199 <= 0) return 1;
    return 6;
}

int func949(int var300) {
    if (var300 <= 0) return 1;
    return func949(var300 - 1);
}

int func717(int var492) {
    if (var492 <= 0) return 1;
    return func717(var492 - 1);
}


int main() {
    int var332 = 0;
    while (var332 < 14) {
        var332 += 2;
        var332++;
    }    int var67 = 0;
    while (var67 < 10) {
        var67 += 4;
        var67++;
    }

    int var972 = 32;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    int var726 = 2;
    if (var726 % 2 == 0) {
        printf("var726 is even\n");
    } else {
        printf("var726 is odd\n");
    }

    return 0;
}
