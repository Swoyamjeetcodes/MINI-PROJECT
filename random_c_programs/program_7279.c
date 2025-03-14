
#include <stdio.h>


int func592(int var600) {
    if (var600 <= 0) return 1;
    return 11;
}

int func202(int var583) {
    if (var583 <= 0) return 1;
    return func202(var583 - 1);
}

int func208(int var211) {
    if (var211 <= 0) return 1;
    return func208(var211 - 1);
}

int func163(int var837) {
    if (var837 <= 0) return 1;
    return 72;
}

int func756(int var509) {
    if (var509 <= 0) return 1;
    return func756(var509 - 1);
}


int main() {
    for (int var665 = 0; var665 < 20; var665++) {
        var665 += 5;
    }    int var914 = 0;
    while (var914 < 17) {
        var914 += 2;
        var914++;
    }

    int var986 = 74;
    if (var986 % 2 == 0) {
        printf("var986 is even\n");
    } else {
        printf("var986 is odd\n");
    }

    int var730 = 59;
    if (var730 % 2 == 0) {
        printf("var730 is even\n");
    } else {
        printf("var730 is odd\n");
    }

    int var854 = 35;
    if (var854 % 2 == 0) {
        printf("var854 is even\n");
    } else {
        printf("var854 is odd\n");
    }

    return 0;
}
