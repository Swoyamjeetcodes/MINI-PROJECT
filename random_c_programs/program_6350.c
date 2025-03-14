
#include <stdio.h>


int func217(int var817) {
    if (var817 <= 0) return 1;
    return func217(var817 - 1);
}


int main() {
    for (int var348 = 0; var348 < 19; var348++) {
        var348 += 1;
    }

    int var699 = 2;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    return 0;
}
