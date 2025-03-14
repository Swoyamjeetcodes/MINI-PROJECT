
#include <stdio.h>


int func283(int var547) {
    if (var547 <= 0) return 1;
    return 18;
}

int func205(int var429) {
    if (var429 <= 0) return 1;
    return 9;
}

int func753(int var383) {
    if (var383 <= 0) return 1;
    return func753(var383 - 1);
}

int func642(int var241) {
    if (var241 <= 0) return 1;
    return 34;
}

int func851(int var969) {
    if (var969 <= 0) return 1;
    return func851(var969 - 1);
}

int func722(int var978) {
    if (var978 <= 0) return 1;
    return func722(var978 - 1);
}


int main() {
    int var449 = 0;
    while (var449 < 15) {
        var449 += 1;
        var449++;
    }    int var73 = 0;
    while (var73 < 8) {
        var73 += 4;
        var73++;
    }    for (int var894 = 0; var894 < 11; var894++) {
        var894 += 2;
    }

    int var819 = 42;
    if (var819 % 2 == 0) {
        printf("var819 is even\n");
    } else {
        printf("var819 is odd\n");
    }

    int var963 = 68;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    int var548 = 18;
    if (var548 % 2 == 0) {
        printf("var548 is even\n");
    } else {
        printf("var548 is odd\n");
    }

    return 0;
}
