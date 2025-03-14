
#include <stdio.h>


int func257(int var320) {
    if (var320 <= 0) return 1;
    return 94;
}

int func549(int var738) {
    if (var738 <= 0) return 1;
    return func549(var738 - 1);
}

int func358(int var682) {
    if (var682 <= 0) return 1;
    return func358(var682 - 1);
}


int main() {
    int var94 = 0;
    while (var94 < 17) {
        var94 += 1;
        var94++;
    }    int var837 = 0;
    while (var837 < 9) {
        var837 += 2;
        var837++;
    }

    int var949 = 14;
    if (var949 % 2 == 0) {
        printf("var949 is even\n");
    } else {
        printf("var949 is odd\n");
    }

    int var467 = 100;
    if (var467 % 2 == 0) {
        printf("var467 is even\n");
    } else {
        printf("var467 is odd\n");
    }

    int var74 = 96;
    if (var74 % 2 == 0) {
        printf("var74 is even\n");
    } else {
        printf("var74 is odd\n");
    }

    return 0;
}
