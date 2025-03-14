
#include <stdio.h>


int func313(int var737) {
    if (var737 <= 0) return 1;
    return 100;
}

int func63(int var588) {
    if (var588 <= 0) return 1;
    return func63(var588 - 1);
}

int func114(int var463) {
    if (var463 <= 0) return 1;
    return 61;
}

int func269(int var317) {
    if (var317 <= 0) return 1;
    return func269(var317 - 1);
}


int main() {
    int var107 = 0;
    while (var107 < 8) {
        var107 += 3;
        var107++;
    }    for (int var723 = 0; var723 < 10; var723++) {
        var723 += 4;
    }    for (int var482 = 0; var482 < 20; var482++) {
        var482 += 2;
    }

    int var274 = 46;
    if (var274 % 2 == 0) {
        printf("var274 is even\n");
    } else {
        printf("var274 is odd\n");
    }

    return 0;
}
