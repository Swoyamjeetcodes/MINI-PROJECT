
#include <stdio.h>


int func175(int var34) {
    if (var34 <= 0) return 1;
    return func175(var34 - 1);
}

int func313(int var136) {
    if (var136 <= 0) return 1;
    return func313(var136 - 1);
}

int func382(int var852) {
    if (var852 <= 0) return 1;
    return 40;
}

int func184(int var265) {
    if (var265 <= 0) return 1;
    return func184(var265 - 1);
}

int func741(int var774) {
    if (var774 <= 0) return 1;
    return func741(var774 - 1);
}


int main() {
    for (int var605 = 0; var605 < 11; var605++) {
        var605 += 3;
    }    int var641 = 0;
    while (var641 < 5) {
        var641 += 5;
        var641++;
    }

    int var993 = 81;
    if (var993 % 2 == 0) {
        printf("var993 is even\n");
    } else {
        printf("var993 is odd\n");
    }

    int var72 = 11;
    if (var72 % 2 == 0) {
        printf("var72 is even\n");
    } else {
        printf("var72 is odd\n");
    }

    int var64 = 100;
    if (var64 % 2 == 0) {
        printf("var64 is even\n");
    } else {
        printf("var64 is odd\n");
    }

    return 0;
}
