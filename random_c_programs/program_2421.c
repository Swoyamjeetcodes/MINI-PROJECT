
#include <stdio.h>


int func217(int var57) {
    if (var57 <= 0) return 1;
    return 62;
}

int func608(int var934) {
    if (var934 <= 0) return 1;
    return 86;
}

int func866(int var364) {
    if (var364 <= 0) return 1;
    return func866(var364 - 1);
}


int main() {
    int var565 = 0;
    while (var565 < 12) {
        var565 += 5;
        var565++;
    }    for (int var451 = 0; var451 < 10; var451++) {
        var451 += 2;
    }    for (int var520 = 0; var520 < 17; var520++) {
        var520 += 3;
    }

    int var400 = 70;
    if (var400 % 2 == 0) {
        printf("var400 is even\n");
    } else {
        printf("var400 is odd\n");
    }

    int var123 = 67;
    if (var123 % 2 == 0) {
        printf("var123 is even\n");
    } else {
        printf("var123 is odd\n");
    }

    return 0;
}
