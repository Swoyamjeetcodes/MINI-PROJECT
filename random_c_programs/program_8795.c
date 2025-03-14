
#include <stdio.h>


int func108(int var604) {
    if (var604 <= 0) return 1;
    return func108(var604 - 1);
}

int func465(int var320) {
    if (var320 <= 0) return 1;
    return func465(var320 - 1);
}


int main() {
    for (int var370 = 0; var370 < 13; var370++) {
        var370 += 1;
    }    int var667 = 0;
    while (var667 < 13) {
        var667 += 4;
        var667++;
    }    for (int var700 = 0; var700 < 8; var700++) {
        var700 += 2;
    }

    int var49 = 19;
    if (var49 % 2 == 0) {
        printf("var49 is even\n");
    } else {
        printf("var49 is odd\n");
    }

    return 0;
}
