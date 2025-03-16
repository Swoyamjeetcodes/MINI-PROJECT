
#include <stdio.h>


int func157(int var743) {
    if (var743 <= 0) return 1;
    return 6;
}

int func400(int var714) {
    if (var714 <= 0) return 1;
    return 60;
}

int func361(int var247) {
    if (var247 <= 0) return 1;
    return func361(var247 - 1);
}

int func635(int var88) {
    if (var88 <= 0) return 1;
    return 10;
}

int func385(int var843) {
    if (var843 <= 0) return 1;
    return func385(var843 - 1);
}

int func313(int var294) {
    if (var294 <= 0) return 1;
    return func313(var294 - 1);
}


int main() {
    int var543 = 0;
    while (var543 < 6) {
        var543 += 2;
        var543++;
    }    int var632 = 0;
    while (var632 < 5) {
        var632 += 4;
        var632++;
    }    for (int var679 = 0; var679 < 5; var679++) {
        var679 += 4;
    }

    int var74 = 42;
    if (var74 % 2 == 0) {
        printf("var74 is even\n");
    } else {
        printf("var74 is odd\n");
    }

    int var637 = 35;
    if (var637 % 2 == 0) {
        printf("var637 is even\n");
    } else {
        printf("var637 is odd\n");
    }

    int var688 = 83;
    if (var688 % 2 == 0) {
        printf("var688 is even\n");
    } else {
        printf("var688 is odd\n");
    }

    int var370 = 37;
    if (var370 % 2 == 0) {
        printf("var370 is even\n");
    } else {
        printf("var370 is odd\n");
    }

    return 0;
}
