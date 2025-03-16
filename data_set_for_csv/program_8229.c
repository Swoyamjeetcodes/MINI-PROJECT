
#include <stdio.h>


int func570(int var11) {
    if (var11 <= 0) return 1;
    return func570(var11 - 1);
}

int func247(int var370) {
    if (var370 <= 0) return 1;
    return func247(var370 - 1);
}


int main() {
    int var540 = 0;
    while (var540 < 8) {
        var540 += 3;
        var540++;
    }    for (int var87 = 0; var87 < 5; var87++) {
        var87 += 4;
    }

    int var647 = 49;
    if (var647 % 2 == 0) {
        printf("var647 is even\n");
    } else {
        printf("var647 is odd\n");
    }

    int var928 = 1;
    if (var928 % 2 == 0) {
        printf("var928 is even\n");
    } else {
        printf("var928 is odd\n");
    }

    int var539 = 82;
    if (var539 % 2 == 0) {
        printf("var539 is even\n");
    } else {
        printf("var539 is odd\n");
    }

    return 0;
}
