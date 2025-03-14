
#include <stdio.h>


int func196(int var691) {
    if (var691 <= 0) return 1;
    return 76;
}

int func685(int var562) {
    if (var562 <= 0) return 1;
    return 4;
}

int func911(int var126) {
    if (var126 <= 0) return 1;
    return 25;
}

int func555(int var124) {
    if (var124 <= 0) return 1;
    return func555(var124 - 1);
}

int func426(int var625) {
    if (var625 <= 0) return 1;
    return func426(var625 - 1);
}

int func990(int var984) {
    if (var984 <= 0) return 1;
    return func990(var984 - 1);
}


int main() {
    for (int var27 = 0; var27 < 13; var27++) {
        var27 += 5;
    }

    int var260 = 0;
    if (var260 % 2 == 0) {
        printf("var260 is even\n");
    } else {
        printf("var260 is odd\n");
    }

    int var523 = 83;
    if (var523 % 2 == 0) {
        printf("var523 is even\n");
    } else {
        printf("var523 is odd\n");
    }

    int var757 = 98;
    if (var757 % 2 == 0) {
        printf("var757 is even\n");
    } else {
        printf("var757 is odd\n");
    }

    return 0;
}
