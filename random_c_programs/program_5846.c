
#include <stdio.h>


int func441(int var723) {
    if (var723 <= 0) return 1;
    return func441(var723 - 1);
}

int func821(int var253) {
    if (var253 <= 0) return 1;
    return 92;
}

int func600(int var654) {
    if (var654 <= 0) return 1;
    return func600(var654 - 1);
}

int func60(int var489) {
    if (var489 <= 0) return 1;
    return func60(var489 - 1);
}


int main() {
    for (int var293 = 0; var293 < 20; var293++) {
        var293 += 3;
    }    int var425 = 0;
    while (var425 < 15) {
        var425 += 2;
        var425++;
    }    int var105 = 0;
    while (var105 < 9) {
        var105 += 2;
        var105++;
    }

    int var839 = 65;
    if (var839 % 2 == 0) {
        printf("var839 is even\n");
    } else {
        printf("var839 is odd\n");
    }

    int var781 = 43;
    if (var781 % 2 == 0) {
        printf("var781 is even\n");
    } else {
        printf("var781 is odd\n");
    }

    int var185 = 70;
    if (var185 % 2 == 0) {
        printf("var185 is even\n");
    } else {
        printf("var185 is odd\n");
    }

    return 0;
}
