
#include <stdio.h>


int func747(int var486) {
    if (var486 <= 0) return 1;
    return func747(var486 - 1);
}

int func954(int var323) {
    if (var323 <= 0) return 1;
    return func954(var323 - 1);
}

int func49(int var823) {
    if (var823 <= 0) return 1;
    return func49(var823 - 1);
}

int func120(int var71) {
    if (var71 <= 0) return 1;
    return 65;
}

int func721(int var144) {
    if (var144 <= 0) return 1;
    return func721(var144 - 1);
}


int main() {
    for (int var740 = 0; var740 < 8; var740++) {
        var740 += 4;
    }    for (int var260 = 0; var260 < 17; var260++) {
        var260 += 4;
    }

    int var976 = 92;
    if (var976 % 2 == 0) {
        printf("var976 is even\n");
    } else {
        printf("var976 is odd\n");
    }

    return 0;
}
