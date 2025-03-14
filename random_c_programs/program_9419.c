
#include <stdio.h>


int func255(int var73) {
    if (var73 <= 0) return 1;
    return 4;
}

int func738(int var160) {
    if (var160 <= 0) return 1;
    return func738(var160 - 1);
}

int func172(int var494) {
    if (var494 <= 0) return 1;
    return 74;
}

int func765(int var410) {
    if (var410 <= 0) return 1;
    return func765(var410 - 1);
}

int func155(int var944) {
    if (var944 <= 0) return 1;
    return func155(var944 - 1);
}


int main() {
    int var656 = 0;
    while (var656 < 6) {
        var656 += 5;
        var656++;
    }    for (int var694 = 0; var694 < 11; var694++) {
        var694 += 5;
    }

    int var88 = 22;
    if (var88 % 2 == 0) {
        printf("var88 is even\n");
    } else {
        printf("var88 is odd\n");
    }

    int var716 = 56;
    if (var716 % 2 == 0) {
        printf("var716 is even\n");
    } else {
        printf("var716 is odd\n");
    }

    return 0;
}
