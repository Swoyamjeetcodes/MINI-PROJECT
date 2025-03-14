
#include <stdio.h>


int func746(int var502) {
    if (var502 <= 0) return 1;
    return func746(var502 - 1);
}

int func253(int var801) {
    if (var801 <= 0) return 1;
    return func253(var801 - 1);
}

int func942(int var185) {
    if (var185 <= 0) return 1;
    return 51;
}

int func796(int var464) {
    if (var464 <= 0) return 1;
    return 78;
}

int func991(int var363) {
    if (var363 <= 0) return 1;
    return 17;
}


int main() {
    for (int var972 = 0; var972 < 20; var972++) {
        var972 += 5;
    }    int var175 = 0;
    while (var175 < 10) {
        var175 += 2;
        var175++;
    }

    int var422 = 67;
    if (var422 % 2 == 0) {
        printf("var422 is even\n");
    } else {
        printf("var422 is odd\n");
    }

    int var506 = 67;
    if (var506 % 2 == 0) {
        printf("var506 is even\n");
    } else {
        printf("var506 is odd\n");
    }

    int var497 = 75;
    if (var497 % 2 == 0) {
        printf("var497 is even\n");
    } else {
        printf("var497 is odd\n");
    }

    return 0;
}
