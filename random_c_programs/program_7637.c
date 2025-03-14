
#include <stdio.h>


int func821(int var282) {
    if (var282 <= 0) return 1;
    return 54;
}

int func591(int var792) {
    if (var792 <= 0) return 1;
    return func591(var792 - 1);
}


int main() {
    for (int var424 = 0; var424 < 19; var424++) {
        var424 += 3;
    }

    int var299 = 12;
    if (var299 % 2 == 0) {
        printf("var299 is even\n");
    } else {
        printf("var299 is odd\n");
    }

    return 0;
}
