
#include <stdio.h>


int func153(int var768) {
    if (var768 <= 0) return 1;
    return func153(var768 - 1);
}

int func627(int var512) {
    if (var512 <= 0) return 1;
    return func627(var512 - 1);
}

int func591(int var833) {
    if (var833 <= 0) return 1;
    return func591(var833 - 1);
}

int func76(int var948) {
    if (var948 <= 0) return 1;
    return 21;
}

int func752(int var968) {
    if (var968 <= 0) return 1;
    return func752(var968 - 1);
}

int func18(int var216) {
    if (var216 <= 0) return 1;
    return 35;
}

int func716(int var654) {
    if (var654 <= 0) return 1;
    return func716(var654 - 1);
}

int func53(int var846) {
    if (var846 <= 0) return 1;
    return func53(var846 - 1);
}


int main() {
    for (int var529 = 0; var529 < 15; var529++) {
        var529 += 4;
    }

    int var709 = 3;
    if (var709 % 2 == 0) {
        printf("var709 is even\n");
    } else {
        printf("var709 is odd\n");
    }

    int var467 = 85;
    if (var467 % 2 == 0) {
        printf("var467 is even\n");
    } else {
        printf("var467 is odd\n");
    }

    int var807 = 74;
    if (var807 % 2 == 0) {
        printf("var807 is even\n");
    } else {
        printf("var807 is odd\n");
    }

    return 0;
}
