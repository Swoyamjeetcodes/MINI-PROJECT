
#include <stdio.h>


int func691(int var261) {
    if (var261 <= 0) return 1;
    return func691(var261 - 1);
}

int func228(int var644) {
    if (var644 <= 0) return 1;
    return func228(var644 - 1);
}

int func753(int var360) {
    if (var360 <= 0) return 1;
    return 25;
}

int func274(int var12) {
    if (var12 <= 0) return 1;
    return 87;
}

int func481(int var858) {
    if (var858 <= 0) return 1;
    return func481(var858 - 1);
}


int main() {
    for (int var919 = 0; var919 < 14; var919++) {
        var919 += 1;
    }    int var886 = 0;
    while (var886 < 10) {
        var886 += 2;
        var886++;
    }    int var861 = 0;
    while (var861 < 20) {
        var861 += 4;
        var861++;
    }    for (int var212 = 0; var212 < 8; var212++) {
        var212 += 5;
    }

    int var653 = 44;
    if (var653 % 2 == 0) {
        printf("var653 is even\n");
    } else {
        printf("var653 is odd\n");
    }

    int var788 = 14;
    if (var788 % 2 == 0) {
        printf("var788 is even\n");
    } else {
        printf("var788 is odd\n");
    }

    return 0;
}
