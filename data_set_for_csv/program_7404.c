
#include <stdio.h>


int func492(int var308) {
    if (var308 <= 0) return 1;
    return 31;
}

int func191(int var513) {
    if (var513 <= 0) return 1;
    return 31;
}

int func284(int var650) {
    if (var650 <= 0) return 1;
    return func284(var650 - 1);
}

int func509(int var570) {
    if (var570 <= 0) return 1;
    return func509(var570 - 1);
}


int main() {
    int var191 = 0;
    while (var191 < 18) {
        var191 += 4;
        var191++;
    }    for (int var667 = 0; var667 < 11; var667++) {
        var667 += 3;
    }

    int var701 = 0;
    if (var701 % 2 == 0) {
        printf("var701 is even\n");
    } else {
        printf("var701 is odd\n");
    }

    int var256 = 24;
    if (var256 % 2 == 0) {
        printf("var256 is even\n");
    } else {
        printf("var256 is odd\n");
    }

    return 0;
}
