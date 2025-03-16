
#include <stdio.h>


int func507(int var281) {
    if (var281 <= 0) return 1;
    return 100;
}

int func960(int var109) {
    if (var109 <= 0) return 1;
    return 8;
}

int func518(int var940) {
    if (var940 <= 0) return 1;
    return func518(var940 - 1);
}

int func757(int var71) {
    if (var71 <= 0) return 1;
    return func757(var71 - 1);
}


int main() {
    for (int var459 = 0; var459 < 11; var459++) {
        var459 += 4;
    }

    int var349 = 30;
    if (var349 % 2 == 0) {
        printf("var349 is even\n");
    } else {
        printf("var349 is odd\n");
    }

    int var300 = 61;
    if (var300 % 2 == 0) {
        printf("var300 is even\n");
    } else {
        printf("var300 is odd\n");
    }

    int var827 = 7;
    if (var827 % 2 == 0) {
        printf("var827 is even\n");
    } else {
        printf("var827 is odd\n");
    }

    return 0;
}
