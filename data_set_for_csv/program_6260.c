
#include <stdio.h>


int func385(int var643) {
    if (var643 <= 0) return 1;
    return func385(var643 - 1);
}

int func652(int var259) {
    if (var259 <= 0) return 1;
    return 80;
}

int func905(int var61) {
    if (var61 <= 0) return 1;
    return func905(var61 - 1);
}


int main() {
    for (int var277 = 0; var277 < 7; var277++) {
        var277 += 1;
    }

    int var802 = 52;
    if (var802 % 2 == 0) {
        printf("var802 is even\n");
    } else {
        printf("var802 is odd\n");
    }

    int var649 = 36;
    if (var649 % 2 == 0) {
        printf("var649 is even\n");
    } else {
        printf("var649 is odd\n");
    }

    return 0;
}
