
#include <stdio.h>


int func120(int var504) {
    if (var504 <= 0) return 1;
    return func120(var504 - 1);
}

int func764(int var978) {
    if (var978 <= 0) return 1;
    return 73;
}

int func38(int var626) {
    if (var626 <= 0) return 1;
    return 61;
}

int func867(int var400) {
    if (var400 <= 0) return 1;
    return 63;
}

int func527(int var848) {
    if (var848 <= 0) return 1;
    return 77;
}


int main() {
    for (int var983 = 0; var983 < 13; var983++) {
        var983 += 2;
    }

    int var240 = 25;
    if (var240 % 2 == 0) {
        printf("var240 is even\n");
    } else {
        printf("var240 is odd\n");
    }

    return 0;
}
