
#include <stdio.h>


int func950(int var389) {
    if (var389 <= 0) return 1;
    return 60;
}

int func191(int var410) {
    if (var410 <= 0) return 1;
    return func191(var410 - 1);
}

int func837(int var399) {
    if (var399 <= 0) return 1;
    return 65;
}

int func685(int var72) {
    if (var72 <= 0) return 1;
    return 83;
}


int main() {
    int var811 = 0;
    while (var811 < 5) {
        var811 += 4;
        var811++;
    }    for (int var843 = 0; var843 < 7; var843++) {
        var843 += 4;
    }    for (int var67 = 0; var67 < 9; var67++) {
        var67 += 1;
    }

    int var62 = 22;
    if (var62 % 2 == 0) {
        printf("var62 is even\n");
    } else {
        printf("var62 is odd\n");
    }

    int var995 = 33;
    if (var995 % 2 == 0) {
        printf("var995 is even\n");
    } else {
        printf("var995 is odd\n");
    }

    int var79 = 12;
    if (var79 % 2 == 0) {
        printf("var79 is even\n");
    } else {
        printf("var79 is odd\n");
    }

    return 0;
}
