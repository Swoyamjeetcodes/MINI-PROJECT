
#include <stdio.h>


int func342(int var798) {
    if (var798 <= 0) return 1;
    return func342(var798 - 1);
}

int func186(int var868) {
    if (var868 <= 0) return 1;
    return func186(var868 - 1);
}

int func523(int var146) {
    if (var146 <= 0) return 1;
    return func523(var146 - 1);
}


int main() {
    for (int var481 = 0; var481 < 18; var481++) {
        var481 += 1;
    }    for (int var130 = 0; var130 < 9; var130++) {
        var130 += 5;
    }    for (int var217 = 0; var217 < 20; var217++) {
        var217 += 4;
    }

    int var824 = 73;
    if (var824 % 2 == 0) {
        printf("var824 is even\n");
    } else {
        printf("var824 is odd\n");
    }

    int var876 = 28;
    if (var876 % 2 == 0) {
        printf("var876 is even\n");
    } else {
        printf("var876 is odd\n");
    }

    int var63 = 81;
    if (var63 % 2 == 0) {
        printf("var63 is even\n");
    } else {
        printf("var63 is odd\n");
    }

    return 0;
}
