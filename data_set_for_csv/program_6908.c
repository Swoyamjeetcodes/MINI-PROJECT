
#include <stdio.h>


int func883(int var852) {
    if (var852 <= 0) return 1;
    return func883(var852 - 1);
}

int func797(int var993) {
    if (var993 <= 0) return 1;
    return 81;
}

int func57(int var754) {
    if (var754 <= 0) return 1;
    return 1;
}

int func989(int var585) {
    if (var585 <= 0) return 1;
    return func989(var585 - 1);
}

int func761(int var83) {
    if (var83 <= 0) return 1;
    return func761(var83 - 1);
}


int main() {
    for (int var795 = 0; var795 < 12; var795++) {
        var795 += 1;
    }    for (int var71 = 0; var71 < 7; var71++) {
        var71 += 5;
    }

    int var623 = 91;
    if (var623 % 2 == 0) {
        printf("var623 is even\n");
    } else {
        printf("var623 is odd\n");
    }

    int var788 = 12;
    if (var788 % 2 == 0) {
        printf("var788 is even\n");
    } else {
        printf("var788 is odd\n");
    }

    return 0;
}
