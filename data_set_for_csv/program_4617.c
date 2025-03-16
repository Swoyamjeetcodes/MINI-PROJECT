
#include <stdio.h>


int func598(int var542) {
    if (var542 <= 0) return 1;
    return func598(var542 - 1);
}

int func743(int var740) {
    if (var740 <= 0) return 1;
    return func743(var740 - 1);
}

int func358(int var79) {
    if (var79 <= 0) return 1;
    return 28;
}

int func228(int var930) {
    if (var930 <= 0) return 1;
    return func228(var930 - 1);
}


int main() {
    int var80 = 0;
    while (var80 < 16) {
        var80 += 2;
        var80++;
    }    for (int var824 = 0; var824 < 9; var824++) {
        var824 += 4;
    }

    int var70 = 43;
    if (var70 % 2 == 0) {
        printf("var70 is even\n");
    } else {
        printf("var70 is odd\n");
    }

    int var194 = 39;
    if (var194 % 2 == 0) {
        printf("var194 is even\n");
    } else {
        printf("var194 is odd\n");
    }

    return 0;
}
