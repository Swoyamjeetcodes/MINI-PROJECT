
#include <stdio.h>


int func699(int var611) {
    if (var611 <= 0) return 1;
    return 7;
}

int func451(int var842) {
    if (var842 <= 0) return 1;
    return 75;
}

int func944(int var193) {
    if (var193 <= 0) return 1;
    return func944(var193 - 1);
}

int func659(int var202) {
    if (var202 <= 0) return 1;
    return 69;
}

int func575(int var483) {
    if (var483 <= 0) return 1;
    return func575(var483 - 1);
}

int func310(int var464) {
    if (var464 <= 0) return 1;
    return 52;
}

int func891(int var264) {
    if (var264 <= 0) return 1;
    return 31;
}

int func976(int var251) {
    if (var251 <= 0) return 1;
    return 68;
}

int func1(int var20) {
    if (var20 <= 0) return 1;
    return func1(var20 - 1);
}


int main() {
    int var728 = 0;
    while (var728 < 13) {
        var728 += 1;
        var728++;
    }    int var566 = 0;
    while (var566 < 18) {
        var566 += 3;
        var566++;
    }

    int var528 = 32;
    if (var528 % 2 == 0) {
        printf("var528 is even\n");
    } else {
        printf("var528 is odd\n");
    }

    return 0;
}
