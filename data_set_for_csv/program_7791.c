
#include <stdio.h>


int func516(int var915) {
    if (var915 <= 0) return 1;
    return 53;
}

int func679(int var356) {
    if (var356 <= 0) return 1;
    return func679(var356 - 1);
}


int main() {
    int var902 = 0;
    while (var902 < 7) {
        var902 += 3;
        var902++;
    }    int var577 = 0;
    while (var577 < 9) {
        var577 += 2;
        var577++;
    }    int var142 = 0;
    while (var142 < 19) {
        var142 += 2;
        var142++;
    }    int var615 = 0;
    while (var615 < 19) {
        var615 += 1;
        var615++;
    }    for (int var467 = 0; var467 < 13; var467++) {
        var467 += 2;
    }

    int var290 = 6;
    if (var290 % 2 == 0) {
        printf("var290 is even\n");
    } else {
        printf("var290 is odd\n");
    }

    int var443 = 28;
    if (var443 % 2 == 0) {
        printf("var443 is even\n");
    } else {
        printf("var443 is odd\n");
    }

    int var874 = 13;
    if (var874 % 2 == 0) {
        printf("var874 is even\n");
    } else {
        printf("var874 is odd\n");
    }

    return 0;
}
