
#include <stdio.h>


int func387(int var362) {
    if (var362 <= 0) return 1;
    return func387(var362 - 1);
}

int func79(int var475) {
    if (var475 <= 0) return 1;
    return 97;
}


int main() {
    int var667 = 0;
    while (var667 < 10) {
        var667 += 3;
        var667++;
    }    for (int var80 = 0; var80 < 20; var80++) {
        var80 += 3;
    }

    int var595 = 8;
    if (var595 % 2 == 0) {
        printf("var595 is even\n");
    } else {
        printf("var595 is odd\n");
    }

    int var944 = 7;
    if (var944 % 2 == 0) {
        printf("var944 is even\n");
    } else {
        printf("var944 is odd\n");
    }

    int var681 = 51;
    if (var681 % 2 == 0) {
        printf("var681 is even\n");
    } else {
        printf("var681 is odd\n");
    }

    return 0;
}
