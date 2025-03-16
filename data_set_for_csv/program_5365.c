
#include <stdio.h>


int func198(int var167) {
    if (var167 <= 0) return 1;
    return 1;
}

int func284(int var319) {
    if (var319 <= 0) return 1;
    return 81;
}

int func956(int var357) {
    if (var357 <= 0) return 1;
    return func956(var357 - 1);
}

int func768(int var98) {
    if (var98 <= 0) return 1;
    return 58;
}


int main() {
    for (int var974 = 0; var974 < 10; var974++) {
        var974 += 5;
    }    int var106 = 0;
    while (var106 < 12) {
        var106 += 5;
        var106++;
    }    int var498 = 0;
    while (var498 < 14) {
        var498 += 3;
        var498++;
    }

    int var273 = 86;
    if (var273 % 2 == 0) {
        printf("var273 is even\n");
    } else {
        printf("var273 is odd\n");
    }

    return 0;
}
