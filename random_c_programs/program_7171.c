
#include <stdio.h>


int func12(int var715) {
    if (var715 <= 0) return 1;
    return func12(var715 - 1);
}


int main() {
    for (int var908 = 0; var908 < 11; var908++) {
        var908 += 2;
    }

    int var120 = 32;
    if (var120 % 2 == 0) {
        printf("var120 is even\n");
    } else {
        printf("var120 is odd\n");
    }

    return 0;
}
