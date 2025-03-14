
#include <stdio.h>


int func182(int var691) {
    if (var691 <= 0) return 1;
    return func182(var691 - 1);
}

int func741(int var531) {
    if (var531 <= 0) return 1;
    return func741(var531 - 1);
}

int func742(int var807) {
    if (var807 <= 0) return 1;
    return func742(var807 - 1);
}

int func517(int var773) {
    if (var773 <= 0) return 1;
    return func517(var773 - 1);
}

int func636(int var910) {
    if (var910 <= 0) return 1;
    return 8;
}

int func907(int var501) {
    if (var501 <= 0) return 1;
    return func907(var501 - 1);
}

int func54(int var521) {
    if (var521 <= 0) return 1;
    return func54(var521 - 1);
}

int func618(int var238) {
    if (var238 <= 0) return 1;
    return 31;
}


int main() {
    int var399 = 0;
    while (var399 < 11) {
        var399 += 5;
        var399++;
    }    int var80 = 0;
    while (var80 < 13) {
        var80 += 1;
        var80++;
    }    int var183 = 0;
    while (var183 < 16) {
        var183 += 3;
        var183++;
    }    for (int var196 = 0; var196 < 16; var196++) {
        var196 += 4;
    }    int var368 = 0;
    while (var368 < 13) {
        var368 += 2;
        var368++;
    }    for (int var119 = 0; var119 < 19; var119++) {
        var119 += 4;
    }

    int var543 = 43;
    if (var543 % 2 == 0) {
        printf("var543 is even\n");
    } else {
        printf("var543 is odd\n");
    }

    int var410 = 80;
    if (var410 % 2 == 0) {
        printf("var410 is even\n");
    } else {
        printf("var410 is odd\n");
    }

    return 0;
}
