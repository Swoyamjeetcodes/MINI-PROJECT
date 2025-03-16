
#include <stdio.h>


int func663(int var31) {
    if (var31 <= 0) return 1;
    return func663(var31 - 1);
}

int func22(int var130) {
    if (var130 <= 0) return 1;
    return 34;
}

int func97(int var713) {
    if (var713 <= 0) return 1;
    return func97(var713 - 1);
}

int func279(int var434) {
    if (var434 <= 0) return 1;
    return func279(var434 - 1);
}

int func324(int var337) {
    if (var337 <= 0) return 1;
    return 3;
}

int func112(int var709) {
    if (var709 <= 0) return 1;
    return func112(var709 - 1);
}

int func94(int var207) {
    if (var207 <= 0) return 1;
    return func94(var207 - 1);
}

int func905(int var87) {
    if (var87 <= 0) return 1;
    return 86;
}


int main() {
    for (int var875 = 0; var875 < 18; var875++) {
        var875 += 4;
    }    for (int var589 = 0; var589 < 12; var589++) {
        var589 += 2;
    }    for (int var788 = 0; var788 < 9; var788++) {
        var788 += 1;
    }

    int var364 = 44;
    if (var364 % 2 == 0) {
        printf("var364 is even\n");
    } else {
        printf("var364 is odd\n");
    }

    int var268 = 1;
    if (var268 % 2 == 0) {
        printf("var268 is even\n");
    } else {
        printf("var268 is odd\n");
    }

    return 0;
}
