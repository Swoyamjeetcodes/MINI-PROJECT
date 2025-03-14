
#include <stdio.h>


int func224(int var908) {
    if (var908 <= 0) return 1;
    return 54;
}

int func164(int var776) {
    if (var776 <= 0) return 1;
    return 78;
}

int func495(int var146) {
    if (var146 <= 0) return 1;
    return 18;
}

int func203(int var764) {
    if (var764 <= 0) return 1;
    return func203(var764 - 1);
}

int func406(int var946) {
    if (var946 <= 0) return 1;
    return func406(var946 - 1);
}


int main() {
    int var352 = 0;
    while (var352 < 13) {
        var352 += 4;
        var352++;
    }

    int var970 = 67;
    if (var970 % 2 == 0) {
        printf("var970 is even\n");
    } else {
        printf("var970 is odd\n");
    }

    int var141 = 9;
    if (var141 % 2 == 0) {
        printf("var141 is even\n");
    } else {
        printf("var141 is odd\n");
    }

    int var722 = 34;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    return 0;
}
