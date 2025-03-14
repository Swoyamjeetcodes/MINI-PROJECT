
#include <stdio.h>


int func173(int var637) {
    if (var637 <= 0) return 1;
    return 2;
}

int func180(int var555) {
    if (var555 <= 0) return 1;
    return 50;
}

int func691(int var661) {
    if (var661 <= 0) return 1;
    return 79;
}

int func305(int var338) {
    if (var338 <= 0) return 1;
    return func305(var338 - 1);
}


int main() {
    int var320 = 0;
    while (var320 < 5) {
        var320 += 5;
        var320++;
    }    int var833 = 0;
    while (var833 < 18) {
        var833 += 1;
        var833++;
    }    int var389 = 0;
    while (var389 < 5) {
        var389 += 5;
        var389++;
    }

    int var363 = 91;
    if (var363 % 2 == 0) {
        printf("var363 is even\n");
    } else {
        printf("var363 is odd\n");
    }

    int var160 = 24;
    if (var160 % 2 == 0) {
        printf("var160 is even\n");
    } else {
        printf("var160 is odd\n");
    }

    return 0;
}
