
#include <stdio.h>


int func491(int var271) {
    if (var271 <= 0) return 1;
    return 97;
}

int func900(int var79) {
    if (var79 <= 0) return 1;
    return 11;
}

int func907(int var168) {
    if (var168 <= 0) return 1;
    return func907(var168 - 1);
}

int func820(int var601) {
    if (var601 <= 0) return 1;
    return func820(var601 - 1);
}

int func542(int var298) {
    if (var298 <= 0) return 1;
    return func542(var298 - 1);
}


int main() {
    int var812 = 0;
    while (var812 < 5) {
        var812 += 4;
        var812++;
    }    int var439 = 0;
    while (var439 < 18) {
        var439 += 3;
        var439++;
    }    for (int var313 = 0; var313 < 12; var313++) {
        var313 += 4;
    }

    int var107 = 76;
    if (var107 % 2 == 0) {
        printf("var107 is even\n");
    } else {
        printf("var107 is odd\n");
    }

    int var184 = 84;
    if (var184 % 2 == 0) {
        printf("var184 is even\n");
    } else {
        printf("var184 is odd\n");
    }

    int var904 = 37;
    if (var904 % 2 == 0) {
        printf("var904 is even\n");
    } else {
        printf("var904 is odd\n");
    }

    return 0;
}
