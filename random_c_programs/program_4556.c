
#include <stdio.h>


int func376(int var415) {
    if (var415 <= 0) return 1;
    return func376(var415 - 1);
}

int func555(int var724) {
    if (var724 <= 0) return 1;
    return func555(var724 - 1);
}

int func608(int var595) {
    if (var595 <= 0) return 1;
    return 14;
}

int func277(int var618) {
    if (var618 <= 0) return 1;
    return func277(var618 - 1);
}


int main() {
    for (int var927 = 0; var927 < 9; var927++) {
        var927 += 1;
    }

    int var241 = 60;
    if (var241 % 2 == 0) {
        printf("var241 is even\n");
    } else {
        printf("var241 is odd\n");
    }

    return 0;
}
