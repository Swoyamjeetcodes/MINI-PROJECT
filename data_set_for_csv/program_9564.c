
#include <stdio.h>


int func613(int var474) {
    if (var474 <= 0) return 1;
    return func613(var474 - 1);
}

int func306(int var663) {
    if (var663 <= 0) return 1;
    return func306(var663 - 1);
}

int func484(int var521) {
    if (var521 <= 0) return 1;
    return 47;
}

int func558(int var694) {
    if (var694 <= 0) return 1;
    return 30;
}

int func366(int var913) {
    if (var913 <= 0) return 1;
    return func366(var913 - 1);
}


int main() {
    int var78 = 0;
    while (var78 < 19) {
        var78 += 3;
        var78++;
    }

    int var699 = 12;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    int var861 = 14;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    int var410 = 89;
    if (var410 % 2 == 0) {
        printf("var410 is even\n");
    } else {
        printf("var410 is odd\n");
    }

    return 0;
}
