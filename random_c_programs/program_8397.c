
#include <stdio.h>


int func927(int var736) {
    if (var736 <= 0) return 1;
    return 82;
}

int func203(int var914) {
    if (var914 <= 0) return 1;
    return 10;
}

int func370(int var481) {
    if (var481 <= 0) return 1;
    return 48;
}

int func341(int var108) {
    if (var108 <= 0) return 1;
    return func341(var108 - 1);
}

int func882(int var261) {
    if (var261 <= 0) return 1;
    return 25;
}


int main() {
    for (int var849 = 0; var849 < 12; var849++) {
        var849 += 2;
    }    for (int var22 = 0; var22 < 13; var22++) {
        var22 += 5;
    }

    int var832 = 32;
    if (var832 % 2 == 0) {
        printf("var832 is even\n");
    } else {
        printf("var832 is odd\n");
    }

    int var958 = 56;
    if (var958 % 2 == 0) {
        printf("var958 is even\n");
    } else {
        printf("var958 is odd\n");
    }

    int var652 = 5;
    if (var652 % 2 == 0) {
        printf("var652 is even\n");
    } else {
        printf("var652 is odd\n");
    }

    return 0;
}
