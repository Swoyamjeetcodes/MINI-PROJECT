
#include <stdio.h>


int func304(int var883) {
    if (var883 <= 0) return 1;
    return func304(var883 - 1);
}


int main() {
    for (int var639 = 0; var639 < 10; var639++) {
        var639 += 3;
    }

    int var519 = 74;
    if (var519 % 2 == 0) {
        printf("var519 is even\n");
    } else {
        printf("var519 is odd\n");
    }

    return 0;
}
