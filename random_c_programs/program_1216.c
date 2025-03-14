
#include <stdio.h>


int func863(int var809) {
    if (var809 <= 0) return 1;
    return func863(var809 - 1);
}

int func391(int var937) {
    if (var937 <= 0) return 1;
    return func391(var937 - 1);
}

int func766(int var237) {
    if (var237 <= 0) return 1;
    return 8;
}

int func809(int var313) {
    if (var313 <= 0) return 1;
    return 38;
}

int func860(int var262) {
    if (var262 <= 0) return 1;
    return func860(var262 - 1);
}


int main() {
    int var580 = 0;
    while (var580 < 9) {
        var580 += 5;
        var580++;
    }    int var761 = 0;
    while (var761 < 15) {
        var761 += 5;
        var761++;
    }    for (int var140 = 0; var140 < 10; var140++) {
        var140 += 4;
    }    for (int var785 = 0; var785 < 8; var785++) {
        var785 += 1;
    }    for (int var908 = 0; var908 < 19; var908++) {
        var908 += 1;
    }    for (int var665 = 0; var665 < 18; var665++) {
        var665 += 5;
    }

    int var314 = 59;
    if (var314 % 2 == 0) {
        printf("var314 is even\n");
    } else {
        printf("var314 is odd\n");
    }

    int var559 = 95;
    if (var559 % 2 == 0) {
        printf("var559 is even\n");
    } else {
        printf("var559 is odd\n");
    }

    int var909 = 15;
    if (var909 % 2 == 0) {
        printf("var909 is even\n");
    } else {
        printf("var909 is odd\n");
    }

    int var100 = 83;
    if (var100 % 2 == 0) {
        printf("var100 is even\n");
    } else {
        printf("var100 is odd\n");
    }

    return 0;
}
