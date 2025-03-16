
#include <stdio.h>


int func141(int var653) {
    if (var653 <= 0) return 1;
    return func141(var653 - 1);
}

int func830(int var313) {
    if (var313 <= 0) return 1;
    return func830(var313 - 1);
}

int func388(int var285) {
    if (var285 <= 0) return 1;
    return func388(var285 - 1);
}

int func494(int var25) {
    if (var25 <= 0) return 1;
    return 56;
}

int func744(int var616) {
    if (var616 <= 0) return 1;
    return 90;
}


int main() {
    int var627 = 0;
    while (var627 < 20) {
        var627 += 3;
        var627++;
    }    for (int var647 = 0; var647 < 18; var647++) {
        var647 += 2;
    }

    int var861 = 89;
    if (var861 % 2 == 0) {
        printf("var861 is even\n");
    } else {
        printf("var861 is odd\n");
    }

    int var580 = 91;
    if (var580 % 2 == 0) {
        printf("var580 is even\n");
    } else {
        printf("var580 is odd\n");
    }

    int var264 = 18;
    if (var264 % 2 == 0) {
        printf("var264 is even\n");
    } else {
        printf("var264 is odd\n");
    }

    return 0;
}
