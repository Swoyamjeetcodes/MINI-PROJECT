
#include <stdio.h>


int func364(int var153) {
    if (var153 <= 0) return 1;
    return 73;
}

int func911(int var647) {
    if (var647 <= 0) return 1;
    return func911(var647 - 1);
}

int func614(int var653) {
    if (var653 <= 0) return 1;
    return func614(var653 - 1);
}

int func97(int var868) {
    if (var868 <= 0) return 1;
    return func97(var868 - 1);
}


int main() {
    int var622 = 0;
    while (var622 < 16) {
        var622 += 1;
        var622++;
    }    for (int var651 = 0; var651 < 15; var651++) {
        var651 += 2;
    }    int var689 = 0;
    while (var689 < 17) {
        var689 += 3;
        var689++;
    }

    int var931 = 73;
    if (var931 % 2 == 0) {
        printf("var931 is even\n");
    } else {
        printf("var931 is odd\n");
    }

    int var758 = 29;
    if (var758 % 2 == 0) {
        printf("var758 is even\n");
    } else {
        printf("var758 is odd\n");
    }

    int var722 = 75;
    if (var722 % 2 == 0) {
        printf("var722 is even\n");
    } else {
        printf("var722 is odd\n");
    }

    return 0;
}
