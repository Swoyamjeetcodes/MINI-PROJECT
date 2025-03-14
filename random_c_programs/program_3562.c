
#include <stdio.h>


int func361(int var330) {
    if (var330 <= 0) return 1;
    return 70;
}

int func566(int var295) {
    if (var295 <= 0) return 1;
    return 54;
}

int func974(int var263) {
    if (var263 <= 0) return 1;
    return func974(var263 - 1);
}

int func576(int var950) {
    if (var950 <= 0) return 1;
    return func576(var950 - 1);
}

int func15(int var423) {
    if (var423 <= 0) return 1;
    return func15(var423 - 1);
}


int main() {
    for (int var564 = 0; var564 < 18; var564++) {
        var564 += 4;
    }

    int var31 = 70;
    if (var31 % 2 == 0) {
        printf("var31 is even\n");
    } else {
        printf("var31 is odd\n");
    }

    return 0;
}
