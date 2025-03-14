
#include <stdio.h>


int func232(int var184) {
    if (var184 <= 0) return 1;
    return 24;
}

int func191(int var967) {
    if (var967 <= 0) return 1;
    return func191(var967 - 1);
}

int func377(int var241) {
    if (var241 <= 0) return 1;
    return 50;
}

int func466(int var667) {
    if (var667 <= 0) return 1;
    return func466(var667 - 1);
}


int main() {
    for (int var522 = 0; var522 < 6; var522++) {
        var522 += 1;
    }

    int var920 = 88;
    if (var920 % 2 == 0) {
        printf("var920 is even\n");
    } else {
        printf("var920 is odd\n");
    }

    int var273 = 19;
    if (var273 % 2 == 0) {
        printf("var273 is even\n");
    } else {
        printf("var273 is odd\n");
    }

    int var45 = 53;
    if (var45 % 2 == 0) {
        printf("var45 is even\n");
    } else {
        printf("var45 is odd\n");
    }

    return 0;
}
