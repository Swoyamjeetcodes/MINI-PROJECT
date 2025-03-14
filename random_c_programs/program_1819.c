
#include <stdio.h>


int func169(int var369) {
    if (var369 <= 0) return 1;
    return func169(var369 - 1);
}

int func561(int var999) {
    if (var999 <= 0) return 1;
    return func561(var999 - 1);
}

int func469(int var624) {
    if (var624 <= 0) return 1;
    return 52;
}


int main() {
    for (int var256 = 0; var256 < 11; var256++) {
        var256 += 1;
    }

    int var867 = 30;
    if (var867 % 2 == 0) {
        printf("var867 is even\n");
    } else {
        printf("var867 is odd\n");
    }

    int var913 = 90;
    if (var913 % 2 == 0) {
        printf("var913 is even\n");
    } else {
        printf("var913 is odd\n");
    }

    return 0;
}
