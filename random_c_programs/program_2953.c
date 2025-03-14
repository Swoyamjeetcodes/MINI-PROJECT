
#include <stdio.h>


int func922(int var273) {
    if (var273 <= 0) return 1;
    return 15;
}

int func386(int var64) {
    if (var64 <= 0) return 1;
    return 52;
}

int func429(int var743) {
    if (var743 <= 0) return 1;
    return func429(var743 - 1);
}

int func250(int var363) {
    if (var363 <= 0) return 1;
    return func250(var363 - 1);
}

int func84(int var198) {
    if (var198 <= 0) return 1;
    return 49;
}

int func240(int var39) {
    if (var39 <= 0) return 1;
    return 80;
}

int func194(int var900) {
    if (var900 <= 0) return 1;
    return func194(var900 - 1);
}


int main() {
    int var334 = 0;
    while (var334 < 17) {
        var334 += 5;
        var334++;
    }

    int var52 = 9;
    if (var52 % 2 == 0) {
        printf("var52 is even\n");
    } else {
        printf("var52 is odd\n");
    }

    int var255 = 34;
    if (var255 % 2 == 0) {
        printf("var255 is even\n");
    } else {
        printf("var255 is odd\n");
    }

    return 0;
}
