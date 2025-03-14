
#include <stdio.h>


int func361(int var212) {
    if (var212 <= 0) return 1;
    return 4;
}

int func79(int var628) {
    if (var628 <= 0) return 1;
    return func79(var628 - 1);
}

int func442(int var172) {
    if (var172 <= 0) return 1;
    return func442(var172 - 1);
}

int func523(int var329) {
    if (var329 <= 0) return 1;
    return func523(var329 - 1);
}


int main() {
    int var862 = 0;
    while (var862 < 15) {
        var862 += 3;
        var862++;
    }    int var176 = 0;
    while (var176 < 15) {
        var176 += 5;
        var176++;
    }    int var399 = 0;
    while (var399 < 16) {
        var399 += 3;
        var399++;
    }

    int var632 = 62;
    if (var632 % 2 == 0) {
        printf("var632 is even\n");
    } else {
        printf("var632 is odd\n");
    }

    int var346 = 98;
    if (var346 % 2 == 0) {
        printf("var346 is even\n");
    } else {
        printf("var346 is odd\n");
    }

    return 0;
}
