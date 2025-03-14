
#include <stdio.h>


int func223(int var312) {
    if (var312 <= 0) return 1;
    return 18;
}

int func228(int var277) {
    if (var277 <= 0) return 1;
    return func228(var277 - 1);
}

int func486(int var4) {
    if (var4 <= 0) return 1;
    return 84;
}

int func488(int var882) {
    if (var882 <= 0) return 1;
    return 43;
}

int func751(int var724) {
    if (var724 <= 0) return 1;
    return 5;
}

int func491(int var172) {
    if (var172 <= 0) return 1;
    return func491(var172 - 1);
}

int func959(int var292) {
    if (var292 <= 0) return 1;
    return 52;
}


int main() {
    for (int var157 = 0; var157 < 13; var157++) {
        var157 += 2;
    }    for (int var313 = 0; var313 < 6; var313++) {
        var313 += 2;
    }    int var19 = 0;
    while (var19 < 15) {
        var19 += 2;
        var19++;
    }    int var728 = 0;
    while (var728 < 17) {
        var728 += 2;
        var728++;
    }

    int var569 = 16;
    if (var569 % 2 == 0) {
        printf("var569 is even\n");
    } else {
        printf("var569 is odd\n");
    }

    int var424 = 90;
    if (var424 % 2 == 0) {
        printf("var424 is even\n");
    } else {
        printf("var424 is odd\n");
    }

    return 0;
}
