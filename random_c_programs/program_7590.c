
#include <stdio.h>


int func307(int var950) {
    if (var950 <= 0) return 1;
    return func307(var950 - 1);
}

int func747(int var130) {
    if (var130 <= 0) return 1;
    return func747(var130 - 1);
}

int func871(int var843) {
    if (var843 <= 0) return 1;
    return func871(var843 - 1);
}

int func111(int var520) {
    if (var520 <= 0) return 1;
    return func111(var520 - 1);
}

int func683(int var751) {
    if (var751 <= 0) return 1;
    return 63;
}


int main() {
    int var320 = 0;
    while (var320 < 11) {
        var320 += 3;
        var320++;
    }    int var440 = 0;
    while (var440 < 14) {
        var440 += 2;
        var440++;
    }    for (int var199 = 0; var199 < 11; var199++) {
        var199 += 4;
    }

    int var367 = 85;
    if (var367 % 2 == 0) {
        printf("var367 is even\n");
    } else {
        printf("var367 is odd\n");
    }

    return 0;
}
