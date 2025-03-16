
#include <stdio.h>


int func770(int var338) {
    if (var338 <= 0) return 1;
    return 72;
}

int func114(int var249) {
    if (var249 <= 0) return 1;
    return func114(var249 - 1);
}


int main() {
    for (int var911 = 0; var911 < 13; var911++) {
        var911 += 3;
    }    for (int var109 = 0; var109 < 12; var109++) {
        var109 += 1;
    }    int var483 = 0;
    while (var483 < 17) {
        var483 += 1;
        var483++;
    }    int var505 = 0;
    while (var505 < 16) {
        var505 += 1;
        var505++;
    }    for (int var207 = 0; var207 < 17; var207++) {
        var207 += 1;
    }

    int var490 = 94;
    if (var490 % 2 == 0) {
        printf("var490 is even\n");
    } else {
        printf("var490 is odd\n");
    }

    int var395 = 27;
    if (var395 % 2 == 0) {
        printf("var395 is even\n");
    } else {
        printf("var395 is odd\n");
    }

    return 0;
}
