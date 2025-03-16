
#include <stdio.h>


int func96(int var839) {
    if (var839 <= 0) return 1;
    return 19;
}

int func62(int var127) {
    if (var127 <= 0) return 1;
    return 21;
}

int func507(int var975) {
    if (var975 <= 0) return 1;
    return func507(var975 - 1);
}

int func262(int var471) {
    if (var471 <= 0) return 1;
    return func262(var471 - 1);
}

int func812(int var442) {
    if (var442 <= 0) return 1;
    return func812(var442 - 1);
}


int main() {
    int var667 = 0;
    while (var667 < 17) {
        var667 += 2;
        var667++;
    }    int var459 = 0;
    while (var459 < 12) {
        var459 += 3;
        var459++;
    }    for (int var482 = 0; var482 < 12; var482++) {
        var482 += 3;
    }

    int var685 = 87;
    if (var685 % 2 == 0) {
        printf("var685 is even\n");
    } else {
        printf("var685 is odd\n");
    }

    int var92 = 87;
    if (var92 % 2 == 0) {
        printf("var92 is even\n");
    } else {
        printf("var92 is odd\n");
    }

    return 0;
}
