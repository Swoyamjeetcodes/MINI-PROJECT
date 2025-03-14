
#include <stdio.h>


int func137(int var739) {
    if (var739 <= 0) return 1;
    return func137(var739 - 1);
}

int func864(int var647) {
    if (var647 <= 0) return 1;
    return 11;
}

int func624(int var976) {
    if (var976 <= 0) return 1;
    return 72;
}


int main() {
    for (int var676 = 0; var676 < 12; var676++) {
        var676 += 4;
    }    int var261 = 0;
    while (var261 < 10) {
        var261 += 1;
        var261++;
    }    int var11 = 0;
    while (var11 < 6) {
        var11 += 3;
        var11++;
    }

    int var736 = 43;
    if (var736 % 2 == 0) {
        printf("var736 is even\n");
    } else {
        printf("var736 is odd\n");
    }

    int var133 = 53;
    if (var133 % 2 == 0) {
        printf("var133 is even\n");
    } else {
        printf("var133 is odd\n");
    }

    return 0;
}
