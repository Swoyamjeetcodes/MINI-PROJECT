
#include <stdio.h>


int func867(int var878) {
    if (var878 <= 0) return 1;
    return 3;
}

int func588(int var188) {
    if (var188 <= 0) return 1;
    return func588(var188 - 1);
}

int func573(int var224) {
    if (var224 <= 0) return 1;
    return 4;
}

int func202(int var787) {
    if (var787 <= 0) return 1;
    return func202(var787 - 1);
}

int func437(int var154) {
    if (var154 <= 0) return 1;
    return 22;
}

int func827(int var975) {
    if (var975 <= 0) return 1;
    return 5;
}

int func158(int var204) {
    if (var204 <= 0) return 1;
    return func158(var204 - 1);
}

int func303(int var413) {
    if (var413 <= 0) return 1;
    return func303(var413 - 1);
}


int main() {
    int var180 = 0;
    while (var180 < 9) {
        var180 += 1;
        var180++;
    }

    int var59 = 37;
    if (var59 % 2 == 0) {
        printf("var59 is even\n");
    } else {
        printf("var59 is odd\n");
    }

    return 0;
}
