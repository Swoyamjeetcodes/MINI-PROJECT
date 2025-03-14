
#include <stdio.h>


int func291(int var761) {
    if (var761 <= 0) return 1;
    return func291(var761 - 1);
}

int func406(int var241) {
    if (var241 <= 0) return 1;
    return 40;
}

int func177(int var636) {
    if (var636 <= 0) return 1;
    return 2;
}

int func677(int var234) {
    if (var234 <= 0) return 1;
    return func677(var234 - 1);
}

int func248(int var958) {
    if (var958 <= 0) return 1;
    return func248(var958 - 1);
}


int main() {
    for (int var38 = 0; var38 < 16; var38++) {
        var38 += 2;
    }    for (int var149 = 0; var149 < 14; var149++) {
        var149 += 2;
    }    int var621 = 0;
    while (var621 < 14) {
        var621 += 2;
        var621++;
    }    for (int var443 = 0; var443 < 20; var443++) {
        var443 += 5;
    }    int var671 = 0;
    while (var671 < 5) {
        var671 += 4;
        var671++;
    }

    int var116 = 43;
    if (var116 % 2 == 0) {
        printf("var116 is even\n");
    } else {
        printf("var116 is odd\n");
    }

    int var926 = 89;
    if (var926 % 2 == 0) {
        printf("var926 is even\n");
    } else {
        printf("var926 is odd\n");
    }

    int var213 = 3;
    if (var213 % 2 == 0) {
        printf("var213 is even\n");
    } else {
        printf("var213 is odd\n");
    }

    int var898 = 79;
    if (var898 % 2 == 0) {
        printf("var898 is even\n");
    } else {
        printf("var898 is odd\n");
    }

    int var811 = 12;
    if (var811 % 2 == 0) {
        printf("var811 is even\n");
    } else {
        printf("var811 is odd\n");
    }

    return 0;
}
