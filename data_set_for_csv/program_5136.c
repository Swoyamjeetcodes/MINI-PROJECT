
#include <stdio.h>


int func104(int var383) {
    if (var383 <= 0) return 1;
    return func104(var383 - 1);
}

int func671(int var571) {
    if (var571 <= 0) return 1;
    return func671(var571 - 1);
}

int func876(int var750) {
    if (var750 <= 0) return 1;
    return func876(var750 - 1);
}

int func961(int var508) {
    if (var508 <= 0) return 1;
    return func961(var508 - 1);
}

int func475(int var47) {
    if (var47 <= 0) return 1;
    return 99;
}

int func52(int var390) {
    if (var390 <= 0) return 1;
    return func52(var390 - 1);
}


int main() {
    int var779 = 0;
    while (var779 < 13) {
        var779 += 4;
        var779++;
    }    for (int var53 = 0; var53 < 9; var53++) {
        var53 += 1;
    }    int var687 = 0;
    while (var687 < 7) {
        var687 += 3;
        var687++;
    }

    int var558 = 2;
    if (var558 % 2 == 0) {
        printf("var558 is even\n");
    } else {
        printf("var558 is odd\n");
    }

    int var823 = 13;
    if (var823 % 2 == 0) {
        printf("var823 is even\n");
    } else {
        printf("var823 is odd\n");
    }

    int var553 = 0;
    if (var553 % 2 == 0) {
        printf("var553 is even\n");
    } else {
        printf("var553 is odd\n");
    }

    return 0;
}
