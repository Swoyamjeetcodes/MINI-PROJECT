
#include <stdio.h>


int func174(int var722) {
    if (var722 <= 0) return 1;
    return 28;
}

int func95(int var731) {
    if (var731 <= 0) return 1;
    return 92;
}

int func17(int var83) {
    if (var83 <= 0) return 1;
    return func17(var83 - 1);
}

int func391(int var751) {
    if (var751 <= 0) return 1;
    return func391(var751 - 1);
}


int main() {
    int var520 = 0;
    while (var520 < 15) {
        var520 += 5;
        var520++;
    }    int var830 = 0;
    while (var830 < 19) {
        var830 += 3;
        var830++;
    }

    int var734 = 39;
    if (var734 % 2 == 0) {
        printf("var734 is even\n");
    } else {
        printf("var734 is odd\n");
    }

    return 0;
}
