
#include <stdio.h>


int func290(int var18) {
    if (var18 <= 0) return 1;
    return 30;
}

int func319(int var402) {
    if (var402 <= 0) return 1;
    return 74;
}

int func30(int var258) {
    if (var258 <= 0) return 1;
    return 47;
}

int func825(int var91) {
    if (var91 <= 0) return 1;
    return func825(var91 - 1);
}


int main() {
    int var790 = 0;
    while (var790 < 12) {
        var790 += 4;
        var790++;
    }    for (int var217 = 0; var217 < 11; var217++) {
        var217 += 5;
    }

    int var767 = 99;
    if (var767 % 2 == 0) {
        printf("var767 is even\n");
    } else {
        printf("var767 is odd\n");
    }

    return 0;
}
