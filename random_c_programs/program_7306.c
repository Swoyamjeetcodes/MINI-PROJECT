
#include <stdio.h>


int func892(int var810) {
    if (var810 <= 0) return 1;
    return 50;
}

int func615(int var118) {
    if (var118 <= 0) return 1;
    return func615(var118 - 1);
}

int func860(int var77) {
    if (var77 <= 0) return 1;
    return 89;
}

int func869(int var725) {
    if (var725 <= 0) return 1;
    return 43;
}

int func6(int var230) {
    if (var230 <= 0) return 1;
    return 22;
}


int main() {
    int var939 = 0;
    while (var939 < 13) {
        var939 += 3;
        var939++;
    }

    int var972 = 67;
    if (var972 % 2 == 0) {
        printf("var972 is even\n");
    } else {
        printf("var972 is odd\n");
    }

    int var534 = 17;
    if (var534 % 2 == 0) {
        printf("var534 is even\n");
    } else {
        printf("var534 is odd\n");
    }

    return 0;
}
