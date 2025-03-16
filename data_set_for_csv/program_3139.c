
#include <stdio.h>


int func510(int var674) {
    if (var674 <= 0) return 1;
    return func510(var674 - 1);
}

int func871(int var961) {
    if (var961 <= 0) return 1;
    return func871(var961 - 1);
}

int func793(int var974) {
    if (var974 <= 0) return 1;
    return 54;
}

int func455(int var429) {
    if (var429 <= 0) return 1;
    return 36;
}


int main() {
    int var738 = 0;
    while (var738 < 6) {
        var738 += 2;
        var738++;
    }    int var496 = 0;
    while (var496 < 11) {
        var496 += 4;
        var496++;
    }    int var785 = 0;
    while (var785 < 14) {
        var785 += 5;
        var785++;
    }    int var50 = 0;
    while (var50 < 20) {
        var50 += 4;
        var50++;
    }    for (int var481 = 0; var481 < 5; var481++) {
        var481 += 5;
    }    int var799 = 0;
    while (var799 < 5) {
        var799 += 5;
        var799++;
    }

    int var661 = 12;
    if (var661 % 2 == 0) {
        printf("var661 is even\n");
    } else {
        printf("var661 is odd\n");
    }

    int var840 = 95;
    if (var840 % 2 == 0) {
        printf("var840 is even\n");
    } else {
        printf("var840 is odd\n");
    }

    return 0;
}
