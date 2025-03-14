
#include <stdio.h>


int func219(int var270) {
    if (var270 <= 0) return 1;
    return func219(var270 - 1);
}

int func498(int var8) {
    if (var8 <= 0) return 1;
    return 21;
}

int func105(int var496) {
    if (var496 <= 0) return 1;
    return 42;
}

int func221(int var65) {
    if (var65 <= 0) return 1;
    return func221(var65 - 1);
}

int func160(int var692) {
    if (var692 <= 0) return 1;
    return 64;
}


int main() {
    for (int var414 = 0; var414 < 14; var414++) {
        var414 += 4;
    }    int var351 = 0;
    while (var351 < 10) {
        var351 += 5;
        var351++;
    }

    int var466 = 33;
    if (var466 % 2 == 0) {
        printf("var466 is even\n");
    } else {
        printf("var466 is odd\n");
    }

    int var883 = 26;
    if (var883 % 2 == 0) {
        printf("var883 is even\n");
    } else {
        printf("var883 is odd\n");
    }

    int var436 = 60;
    if (var436 % 2 == 0) {
        printf("var436 is even\n");
    } else {
        printf("var436 is odd\n");
    }

    return 0;
}
