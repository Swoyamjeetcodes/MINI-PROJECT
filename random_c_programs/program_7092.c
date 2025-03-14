
#include <stdio.h>


int func15(int var609) {
    if (var609 <= 0) return 1;
    return 53;
}

int func558(int var297) {
    if (var297 <= 0) return 1;
    return func558(var297 - 1);
}

int func778(int var108) {
    if (var108 <= 0) return 1;
    return func778(var108 - 1);
}

int func301(int var908) {
    if (var908 <= 0) return 1;
    return func301(var908 - 1);
}

int func185(int var811) {
    if (var811 <= 0) return 1;
    return 91;
}


int main() {
    int var705 = 0;
    while (var705 < 15) {
        var705 += 3;
        var705++;
    }    int var129 = 0;
    while (var129 < 13) {
        var129 += 3;
        var129++;
    }

    int var79 = 83;
    if (var79 % 2 == 0) {
        printf("var79 is even\n");
    } else {
        printf("var79 is odd\n");
    }

    int var730 = 5;
    if (var730 % 2 == 0) {
        printf("var730 is even\n");
    } else {
        printf("var730 is odd\n");
    }

    return 0;
}
