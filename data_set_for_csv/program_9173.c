
#include <stdio.h>


int func608(int var965) {
    if (var965 <= 0) return 1;
    return 84;
}

int func458(int var184) {
    if (var184 <= 0) return 1;
    return 90;
}

int func346(int var769) {
    if (var769 <= 0) return 1;
    return func346(var769 - 1);
}

int func331(int var335) {
    if (var335 <= 0) return 1;
    return func331(var335 - 1);
}

int func267(int var493) {
    if (var493 <= 0) return 1;
    return 25;
}


int main() {
    for (int var741 = 0; var741 < 9; var741++) {
        var741 += 5;
    }    int var783 = 0;
    while (var783 < 10) {
        var783 += 1;
        var783++;
    }

    int var807 = 72;
    if (var807 % 2 == 0) {
        printf("var807 is even\n");
    } else {
        printf("var807 is odd\n");
    }

    int var517 = 27;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    return 0;
}
