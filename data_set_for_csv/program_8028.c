
#include <stdio.h>


int func19(int var522) {
    if (var522 <= 0) return 1;
    return 45;
}

int func24(int var130) {
    if (var130 <= 0) return 1;
    return func24(var130 - 1);
}

int func185(int var699) {
    if (var699 <= 0) return 1;
    return func185(var699 - 1);
}

int func474(int var233) {
    if (var233 <= 0) return 1;
    return func474(var233 - 1);
}

int func336(int var666) {
    if (var666 <= 0) return 1;
    return func336(var666 - 1);
}

int func682(int var885) {
    if (var885 <= 0) return 1;
    return 10;
}

int func786(int var116) {
    if (var116 <= 0) return 1;
    return 30;
}

int func970(int var645) {
    if (var645 <= 0) return 1;
    return 55;
}


int main() {
    int var690 = 0;
    while (var690 < 7) {
        var690 += 2;
        var690++;
    }    for (int var138 = 0; var138 < 12; var138++) {
        var138 += 4;
    }    for (int var103 = 0; var103 < 8; var103++) {
        var103 += 1;
    }

    int var521 = 97;
    if (var521 % 2 == 0) {
        printf("var521 is even\n");
    } else {
        printf("var521 is odd\n");
    }

    int var635 = 22;
    if (var635 % 2 == 0) {
        printf("var635 is even\n");
    } else {
        printf("var635 is odd\n");
    }

    return 0;
}
