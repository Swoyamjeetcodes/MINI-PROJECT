
#include <stdio.h>


int func354(int var636) {
    if (var636 <= 0) return 1;
    return func354(var636 - 1);
}

int func863(int var975) {
    if (var975 <= 0) return 1;
    return 23;
}

int func72(int var707) {
    if (var707 <= 0) return 1;
    return 34;
}

int func276(int var593) {
    if (var593 <= 0) return 1;
    return func276(var593 - 1);
}

int func647(int var777) {
    if (var777 <= 0) return 1;
    return func647(var777 - 1);
}


int main() {
    int var696 = 0;
    while (var696 < 8) {
        var696 += 2;
        var696++;
    }    for (int var654 = 0; var654 < 16; var654++) {
        var654 += 1;
    }

    int var287 = 42;
    if (var287 % 2 == 0) {
        printf("var287 is even\n");
    } else {
        printf("var287 is odd\n");
    }

    int var601 = 23;
    if (var601 % 2 == 0) {
        printf("var601 is even\n");
    } else {
        printf("var601 is odd\n");
    }

    int var670 = 36;
    if (var670 % 2 == 0) {
        printf("var670 is even\n");
    } else {
        printf("var670 is odd\n");
    }

    return 0;
}
