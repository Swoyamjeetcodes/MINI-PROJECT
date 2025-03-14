
#include <stdio.h>


int func970(int var820) {
    if (var820 <= 0) return 1;
    return func970(var820 - 1);
}

int func958(int var885) {
    if (var885 <= 0) return 1;
    return 16;
}

int func7(int var299) {
    if (var299 <= 0) return 1;
    return func7(var299 - 1);
}

int func2(int var873) {
    if (var873 <= 0) return 1;
    return 48;
}

int func786(int var23) {
    if (var23 <= 0) return 1;
    return 75;
}


int main() {
    int var571 = 0;
    while (var571 < 16) {
        var571 += 5;
        var571++;
    }

    int var378 = 86;
    if (var378 % 2 == 0) {
        printf("var378 is even\n");
    } else {
        printf("var378 is odd\n");
    }

    int var243 = 58;
    if (var243 % 2 == 0) {
        printf("var243 is even\n");
    } else {
        printf("var243 is odd\n");
    }

    return 0;
}
