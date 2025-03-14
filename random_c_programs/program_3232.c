
#include <stdio.h>


int func575(int var417) {
    if (var417 <= 0) return 1;
    return 9;
}

int func222(int var341) {
    if (var341 <= 0) return 1;
    return func222(var341 - 1);
}


int main() {
    for (int var731 = 0; var731 < 13; var731++) {
        var731 += 1;
    }    for (int var370 = 0; var370 < 10; var370++) {
        var370 += 4;
    }

    int var918 = 34;
    if (var918 % 2 == 0) {
        printf("var918 is even\n");
    } else {
        printf("var918 is odd\n");
    }

    return 0;
}
