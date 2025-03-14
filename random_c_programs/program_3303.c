
#include <stdio.h>


int func533(int var675) {
    if (var675 <= 0) return 1;
    return func533(var675 - 1);
}

int func596(int var687) {
    if (var687 <= 0) return 1;
    return 45;
}


int main() {
    int var950 = 0;
    while (var950 < 10) {
        var950 += 4;
        var950++;
    }

    int var501 = 100;
    if (var501 % 2 == 0) {
        printf("var501 is even\n");
    } else {
        printf("var501 is odd\n");
    }

    int var151 = 84;
    if (var151 % 2 == 0) {
        printf("var151 is even\n");
    } else {
        printf("var151 is odd\n");
    }

    return 0;
}
