
#include <stdio.h>


int func791(int var707) {
    if (var707 <= 0) return 1;
    return func791(var707 - 1);
}

int func486(int var494) {
    if (var494 <= 0) return 1;
    return 56;
}

int func938(int var650) {
    if (var650 <= 0) return 1;
    return func938(var650 - 1);
}

int func282(int var14) {
    if (var14 <= 0) return 1;
    return 62;
}


int main() {
    for (int var744 = 0; var744 < 18; var744++) {
        var744 += 2;
    }    int var902 = 0;
    while (var902 < 10) {
        var902 += 2;
        var902++;
    }

    int var968 = 70;
    if (var968 % 2 == 0) {
        printf("var968 is even\n");
    } else {
        printf("var968 is odd\n");
    }

    int var592 = 75;
    if (var592 % 2 == 0) {
        printf("var592 is even\n");
    } else {
        printf("var592 is odd\n");
    }

    return 0;
}
