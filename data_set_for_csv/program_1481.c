
#include <stdio.h>


int func842(int var92) {
    if (var92 <= 0) return 1;
    return func842(var92 - 1);
}

int func578(int var928) {
    if (var928 <= 0) return 1;
    return 7;
}

int func922(int var791) {
    if (var791 <= 0) return 1;
    return func922(var791 - 1);
}


int main() {
    for (int var644 = 0; var644 < 13; var644++) {
        var644 += 2;
    }    for (int var556 = 0; var556 < 16; var556++) {
        var556 += 4;
    }    int var521 = 0;
    while (var521 < 13) {
        var521 += 2;
        var521++;
    }

    int var5 = 68;
    if (var5 % 2 == 0) {
        printf("var5 is even\n");
    } else {
        printf("var5 is odd\n");
    }

    return 0;
}
