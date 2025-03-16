
#include <stdio.h>


int func57(int var708) {
    if (var708 <= 0) return 1;
    return func57(var708 - 1);
}

int func210(int var665) {
    if (var665 <= 0) return 1;
    return func210(var665 - 1);
}

int func211(int var366) {
    if (var366 <= 0) return 1;
    return func211(var366 - 1);
}


int main() {
    int var642 = 0;
    while (var642 < 17) {
        var642 += 5;
        var642++;
    }    for (int var515 = 0; var515 < 9; var515++) {
        var515 += 5;
    }    int var400 = 0;
    while (var400 < 19) {
        var400 += 5;
        var400++;
    }

    int var999 = 2;
    if (var999 % 2 == 0) {
        printf("var999 is even\n");
    } else {
        printf("var999 is odd\n");
    }

    int var101 = 22;
    if (var101 % 2 == 0) {
        printf("var101 is even\n");
    } else {
        printf("var101 is odd\n");
    }

    int var124 = 39;
    if (var124 % 2 == 0) {
        printf("var124 is even\n");
    } else {
        printf("var124 is odd\n");
    }

    return 0;
}
