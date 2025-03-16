
#include <stdio.h>


int func169(int var528) {
    if (var528 <= 0) return 1;
    return 12;
}

int func514(int var918) {
    if (var918 <= 0) return 1;
    return func514(var918 - 1);
}

int func103(int var597) {
    if (var597 <= 0) return 1;
    return 3;
}

int func62(int var382) {
    if (var382 <= 0) return 1;
    return func62(var382 - 1);
}

int func522(int var963) {
    if (var963 <= 0) return 1;
    return 94;
}

int func316(int var363) {
    if (var363 <= 0) return 1;
    return func316(var363 - 1);
}

int func63(int var396) {
    if (var396 <= 0) return 1;
    return func63(var396 - 1);
}


int main() {
    for (int var439 = 0; var439 < 18; var439++) {
        var439 += 4;
    }    for (int var842 = 0; var842 < 6; var842++) {
        var842 += 2;
    }    for (int var113 = 0; var113 < 15; var113++) {
        var113 += 3;
    }    for (int var432 = 0; var432 < 13; var432++) {
        var432 += 1;
    }

    int var511 = 72;
    if (var511 % 2 == 0) {
        printf("var511 is even\n");
    } else {
        printf("var511 is odd\n");
    }

    return 0;
}
