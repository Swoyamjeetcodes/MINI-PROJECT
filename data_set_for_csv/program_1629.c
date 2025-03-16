
#include <stdio.h>


int func603(int var53) {
    if (var53 <= 0) return 1;
    return func603(var53 - 1);
}


int main() {
    for (int var466 = 0; var466 < 20; var466++) {
        var466 += 3;
    }

    int var699 = 93;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    return 0;
}
