
#include <stdio.h>


int func689(int var850) {
    if (var850 <= 0) return 1;
    return 67;
}

int func961(int var287) {
    if (var287 <= 0) return 1;
    return 36;
}

int func171(int var812) {
    if (var812 <= 0) return 1;
    return func171(var812 - 1);
}

int func941(int var712) {
    if (var712 <= 0) return 1;
    return 33;
}

int func392(int var370) {
    if (var370 <= 0) return 1;
    return func392(var370 - 1);
}


int main() {
    int var123 = 0;
    while (var123 < 9) {
        var123 += 2;
        var123++;
    }

    int var977 = 75;
    if (var977 % 2 == 0) {
        printf("var977 is even\n");
    } else {
        printf("var977 is odd\n");
    }

    int var429 = 89;
    if (var429 % 2 == 0) {
        printf("var429 is even\n");
    } else {
        printf("var429 is odd\n");
    }

    return 0;
}
