
#include <stdio.h>


int func184(int var91) {
    if (var91 <= 0) return 1;
    return 17;
}

int func990(int var157) {
    if (var157 <= 0) return 1;
    return func990(var157 - 1);
}

int func262(int var63) {
    if (var63 <= 0) return 1;
    return 1;
}


int main() {
    for (int var666 = 0; var666 < 15; var666++) {
        var666 += 5;
    }

    int var611 = 10;
    if (var611 % 2 == 0) {
        printf("var611 is even\n");
    } else {
        printf("var611 is odd\n");
    }

    int var953 = 2;
    if (var953 % 2 == 0) {
        printf("var953 is even\n");
    } else {
        printf("var953 is odd\n");
    }

    return 0;
}
