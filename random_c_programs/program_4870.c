
#include <stdio.h>


int func3(int var586) {
    if (var586 <= 0) return 1;
    return 50;
}

int func205(int var525) {
    if (var525 <= 0) return 1;
    return func205(var525 - 1);
}

int func569(int var930) {
    if (var930 <= 0) return 1;
    return 33;
}

int func626(int var778) {
    if (var778 <= 0) return 1;
    return func626(var778 - 1);
}

int func866(int var287) {
    if (var287 <= 0) return 1;
    return func866(var287 - 1);
}

int func676(int var797) {
    if (var797 <= 0) return 1;
    return 17;
}

int func295(int var931) {
    if (var931 <= 0) return 1;
    return func295(var931 - 1);
}


int main() {
    int var361 = 0;
    while (var361 < 5) {
        var361 += 2;
        var361++;
    }    for (int var642 = 0; var642 < 13; var642++) {
        var642 += 5;
    }    int var265 = 0;
    while (var265 < 14) {
        var265 += 1;
        var265++;
    }

    int var308 = 65;
    if (var308 % 2 == 0) {
        printf("var308 is even\n");
    } else {
        printf("var308 is odd\n");
    }

    int var604 = 65;
    if (var604 % 2 == 0) {
        printf("var604 is even\n");
    } else {
        printf("var604 is odd\n");
    }

    return 0;
}
