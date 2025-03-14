
#include <stdio.h>


int func789(int var750) {
    if (var750 <= 0) return 1;
    return 31;
}

int func945(int var296) {
    if (var296 <= 0) return 1;
    return func945(var296 - 1);
}


int main() {
    int var175 = 0;
    while (var175 < 9) {
        var175 += 1;
        var175++;
    }    for (int var292 = 0; var292 < 6; var292++) {
        var292 += 3;
    }    int var842 = 0;
    while (var842 < 11) {
        var842 += 5;
        var842++;
    }

    int var485 = 62;
    if (var485 % 2 == 0) {
        printf("var485 is even\n");
    } else {
        printf("var485 is odd\n");
    }

    int var877 = 52;
    if (var877 % 2 == 0) {
        printf("var877 is even\n");
    } else {
        printf("var877 is odd\n");
    }

    return 0;
}
