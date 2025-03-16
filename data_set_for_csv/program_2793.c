
#include <stdio.h>


int func108(int var18) {
    if (var18 <= 0) return 1;
    return 23;
}

int func192(int var603) {
    if (var603 <= 0) return 1;
    return 59;
}

int func280(int var796) {
    if (var796 <= 0) return 1;
    return func280(var796 - 1);
}


int main() {
    int var872 = 0;
    while (var872 < 13) {
        var872 += 4;
        var872++;
    }

    int var212 = 75;
    if (var212 % 2 == 0) {
        printf("var212 is even\n");
    } else {
        printf("var212 is odd\n");
    }

    int var792 = 79;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    int var949 = 99;
    if (var949 % 2 == 0) {
        printf("var949 is even\n");
    } else {
        printf("var949 is odd\n");
    }

    return 0;
}
