
#include <stdio.h>


int func899(int var996) {
    if (var996 <= 0) return 1;
    return 59;
}

int func73(int var37) {
    if (var37 <= 0) return 1;
    return 23;
}

int func861(int var231) {
    if (var231 <= 0) return 1;
    return func861(var231 - 1);
}

int func330(int var530) {
    if (var530 <= 0) return 1;
    return func330(var530 - 1);
}


int main() {
    int var924 = 0;
    while (var924 < 5) {
        var924 += 3;
        var924++;
    }    int var990 = 0;
    while (var990 < 19) {
        var990 += 4;
        var990++;
    }    for (int var487 = 0; var487 < 5; var487++) {
        var487 += 1;
    }

    int var309 = 28;
    if (var309 % 2 == 0) {
        printf("var309 is even\n");
    } else {
        printf("var309 is odd\n");
    }

    int var341 = 12;
    if (var341 % 2 == 0) {
        printf("var341 is even\n");
    } else {
        printf("var341 is odd\n");
    }

    int var607 = 93;
    if (var607 % 2 == 0) {
        printf("var607 is even\n");
    } else {
        printf("var607 is odd\n");
    }

    return 0;
}
