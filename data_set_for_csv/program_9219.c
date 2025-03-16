
#include <stdio.h>


int func991(int var706) {
    if (var706 <= 0) return 1;
    return func991(var706 - 1);
}

int func458(int var505) {
    if (var505 <= 0) return 1;
    return 64;
}


int main() {
    int var910 = 0;
    while (var910 < 13) {
        var910 += 3;
        var910++;
    }    int var867 = 0;
    while (var867 < 9) {
        var867 += 2;
        var867++;
    }    int var962 = 0;
    while (var962 < 19) {
        var962 += 4;
        var962++;
    }    int var273 = 0;
    while (var273 < 5) {
        var273 += 1;
        var273++;
    }    for (int var349 = 0; var349 < 8; var349++) {
        var349 += 2;
    }

    int var205 = 7;
    if (var205 % 2 == 0) {
        printf("var205 is even\n");
    } else {
        printf("var205 is odd\n");
    }

    int var85 = 38;
    if (var85 % 2 == 0) {
        printf("var85 is even\n");
    } else {
        printf("var85 is odd\n");
    }

    return 0;
}
