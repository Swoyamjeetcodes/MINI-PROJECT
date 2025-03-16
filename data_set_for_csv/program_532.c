
#include <stdio.h>


int func283(int var178) {
    if (var178 <= 0) return 1;
    return 60;
}

int func550(int var562) {
    if (var562 <= 0) return 1;
    return func550(var562 - 1);
}


int main() {
    for (int var997 = 0; var997 < 14; var997++) {
        var997 += 3;
    }    for (int var917 = 0; var917 < 5; var917++) {
        var917 += 4;
    }    int var391 = 0;
    while (var391 < 15) {
        var391 += 5;
        var391++;
    }    int var433 = 0;
    while (var433 < 20) {
        var433 += 3;
        var433++;
    }

    int var400 = 94;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    int var757 = 24;
    if (var757 % 2 == 0) {
        printf("var757 is even\n");
    } else {
        printf("var757 is odd\n");
    }

    int var572 = 92;
    if (var572 % 2 == 0) {
        printf("var572 is even\n");
    } else {
        printf("var572 is odd\n");
    }

    return 0;
}
