
#include <stdio.h>


int func890(int var687) {
    if (var687 <= 0) return 1;
    return func890(var687 - 1);
}

int func106(int var211) {
    if (var211 <= 0) return 1;
    return func106(var211 - 1);
}

int func352(int var466) {
    if (var466 <= 0) return 1;
    return func352(var466 - 1);
}

int func983(int var31) {
    if (var31 <= 0) return 1;
    return func983(var31 - 1);
}

int func542(int var696) {
    if (var696 <= 0) return 1;
    return 96;
}


int main() {
    for (int var778 = 0; var778 < 8; var778++) {
        var778 += 5;
    }

    int var935 = 80;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    int var424 = 33;
    if (var424 % 2 == 0) {
        printf("var424 is even\n");
    } else {
        printf("var424 is odd\n");
    }

    return 0;
}
