
#include <stdio.h>


int func560(int var33) {
    if (var33 <= 0) return 1;
    return 3;
}

int func537(int var394) {
    if (var394 <= 0) return 1;
    return func537(var394 - 1);
}

int func548(int var796) {
    if (var796 <= 0) return 1;
    return 82;
}

int func611(int var610) {
    if (var610 <= 0) return 1;
    return func611(var610 - 1);
}


int main() {
    for (int var12 = 0; var12 < 14; var12++) {
        var12 += 2;
    }    for (int var210 = 0; var210 < 12; var210++) {
        var210 += 3;
    }

    int var447 = 65;
    if (var447 % 2 == 0) {
        printf("var447 is even\n");
    } else {
        printf("var447 is odd\n");
    }

    int var34 = 35;
    if (var34 % 2 == 0) {
        printf("var34 is even\n");
    } else {
        printf("var34 is odd\n");
    }

    return 0;
}
