
#include <stdio.h>


int func511(int var158) {
    if (var158 <= 0) return 1;
    return func511(var158 - 1);
}

int func91(int var641) {
    if (var641 <= 0) return 1;
    return func91(var641 - 1);
}

int func95(int var582) {
    if (var582 <= 0) return 1;
    return 1;
}

int func432(int var929) {
    if (var929 <= 0) return 1;
    return 25;
}


int main() {
    int var673 = 0;
    while (var673 < 13) {
        var673 += 4;
        var673++;
    }    int var190 = 0;
    while (var190 < 9) {
        var190 += 5;
        var190++;
    }

    int var556 = 76;
    if (var556 % 2 == 0) {
        printf("var556 is even\n");
    } else {
        printf("var556 is odd\n");
    }

    int var734 = 96;
    if (var734 % 2 == 0) {
        printf("var734 is even\n");
    } else {
        printf("var734 is odd\n");
    }

    int var208 = 21;
    if (var208 % 2 == 0) {
        printf("var208 is even\n");
    } else {
        printf("var208 is odd\n");
    }

    return 0;
}
