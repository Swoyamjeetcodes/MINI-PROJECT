
#include <stdio.h>


int func911(int var678) {
    if (var678 <= 0) return 1;
    return func911(var678 - 1);
}

int func832(int var974) {
    if (var974 <= 0) return 1;
    return 38;
}

int func456(int var131) {
    if (var131 <= 0) return 1;
    return 28;
}

int func936(int var391) {
    if (var391 <= 0) return 1;
    return 42;
}


int main() {
    int var150 = 0;
    while (var150 < 5) {
        var150 += 2;
        var150++;
    }    int var159 = 0;
    while (var159 < 17) {
        var159 += 4;
        var159++;
    }    int var158 = 0;
    while (var158 < 12) {
        var158 += 5;
        var158++;
    }

    int var589 = 28;
    if (var589 % 2 == 0) {
        printf("var589 is even\n");
    } else {
        printf("var589 is odd\n");
    }

    return 0;
}
