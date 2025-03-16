
#include <stdio.h>


int func235(int var965) {
    if (var965 <= 0) return 1;
    return func235(var965 - 1);
}

int func18(int var523) {
    if (var523 <= 0) return 1;
    return func18(var523 - 1);
}

int func579(int var609) {
    if (var609 <= 0) return 1;
    return func579(var609 - 1);
}

int func426(int var993) {
    if (var993 <= 0) return 1;
    return func426(var993 - 1);
}

int func864(int var437) {
    if (var437 <= 0) return 1;
    return 81;
}


int main() {
    int var79 = 0;
    while (var79 < 18) {
        var79 += 2;
        var79++;
    }    int var769 = 0;
    while (var769 < 5) {
        var769 += 4;
        var769++;
    }

    int var853 = 20;
    if (var853 % 2 == 0) {
        printf("var853 is even\n");
    } else {
        printf("var853 is odd\n");
    }

    int var74 = 47;
    if (var74 % 2 == 0) {
        printf("var74 is even\n");
    } else {
        printf("var74 is odd\n");
    }

    int var888 = 24;
    if (var888 % 2 == 0) {
        printf("var888 is even\n");
    } else {
        printf("var888 is odd\n");
    }

    int var969 = 13;
    if (var969 % 2 == 0) {
        printf("var969 is even\n");
    } else {
        printf("var969 is odd\n");
    }

    return 0;
}
