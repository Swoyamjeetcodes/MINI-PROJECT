
#include <stdio.h>


int func455(int var255) {
    if (var255 <= 0) return 1;
    return func455(var255 - 1);
}

int func937(int var717) {
    if (var717 <= 0) return 1;
    return func937(var717 - 1);
}

int func329(int var725) {
    if (var725 <= 0) return 1;
    return func329(var725 - 1);
}


int main() {
    for (int var42 = 0; var42 < 12; var42++) {
        var42 += 4;
    }

    int var234 = 48;
    if (var234 % 2 == 0) {
        printf("var234 is even\n");
    } else {
        printf("var234 is odd\n");
    }

    int var126 = 31;
    if (var126 % 2 == 0) {
        printf("var126 is even\n");
    } else {
        printf("var126 is odd\n");
    }

    return 0;
}
