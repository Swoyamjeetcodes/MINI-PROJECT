
#include <stdio.h>


int func890(int var963) {
    if (var963 <= 0) return 1;
    return func890(var963 - 1);
}

int func303(int var103) {
    if (var103 <= 0) return 1;
    return 27;
}

int func619(int var932) {
    if (var932 <= 0) return 1;
    return 71;
}

int func920(int var495) {
    if (var495 <= 0) return 1;
    return 40;
}

int func419(int var404) {
    if (var404 <= 0) return 1;
    return func419(var404 - 1);
}


int main() {
    for (int var351 = 0; var351 < 12; var351++) {
        var351 += 3;
    }    for (int var192 = 0; var192 < 15; var192++) {
        var192 += 5;
    }

    int var272 = 62;
    if (var272 % 2 == 0) {
        printf("var272 is even\n");
    } else {
        printf("var272 is odd\n");
    }

    int var396 = 80;
    if (var396 % 2 == 0) {
        printf("var396 is even\n");
    } else {
        printf("var396 is odd\n");
    }

    return 0;
}
