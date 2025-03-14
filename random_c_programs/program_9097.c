
#include <stdio.h>


int func547(int var11) {
    if (var11 <= 0) return 1;
    return 60;
}

int func13(int var18) {
    if (var18 <= 0) return 1;
    return func13(var18 - 1);
}

int func694(int var436) {
    if (var436 <= 0) return 1;
    return 45;
}

int func760(int var360) {
    if (var360 <= 0) return 1;
    return 92;
}


int main() {
    int var556 = 0;
    while (var556 < 20) {
        var556 += 2;
        var556++;
    }

    int var407 = 55;
    if (var407 % 2 == 0) {
        printf("var407 is even\n");
    } else {
        printf("var407 is odd\n");
    }

    int var98 = 1;
    if (var98 % 2 == 0) {
        printf("var98 is even\n");
    } else {
        printf("var98 is odd\n");
    }

    return 0;
}
