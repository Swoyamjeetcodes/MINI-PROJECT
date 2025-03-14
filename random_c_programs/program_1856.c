
#include <stdio.h>


int func517(int var102) {
    if (var102 <= 0) return 1;
    return func517(var102 - 1);
}

int func366(int var458) {
    if (var458 <= 0) return 1;
    return func366(var458 - 1);
}

int func717(int var407) {
    if (var407 <= 0) return 1;
    return func717(var407 - 1);
}

int func134(int var720) {
    if (var720 <= 0) return 1;
    return 34;
}

int func940(int var213) {
    if (var213 <= 0) return 1;
    return func940(var213 - 1);
}


int main() {
    for (int var608 = 0; var608 < 14; var608++) {
        var608 += 5;
    }    int var540 = 0;
    while (var540 < 13) {
        var540 += 3;
        var540++;
    }

    int var828 = 20;
    if (var828 % 2 == 0) {
        printf("var828 is even\n");
    } else {
        printf("var828 is odd\n");
    }

    int var717 = 82;
    if (var717 % 2 == 0) {
        printf("var717 is even\n");
    } else {
        printf("var717 is odd\n");
    }

    int var313 = 8;
    if (var313 % 2 == 0) {
        printf("var313 is even\n");
    } else {
        printf("var313 is odd\n");
    }

    return 0;
}
