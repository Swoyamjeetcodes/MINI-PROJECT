
#include <stdio.h>


int func453(int var675) {
    if (var675 <= 0) return 1;
    return func453(var675 - 1);
}


int main() {
    for (int var266 = 0; var266 < 10; var266++) {
        var266 += 5;
    }

    int var695 = 10;
    if (var695 % 2 == 0) {
        printf("var695 is even\n");
    } else {
        printf("var695 is odd\n");
    }

    return 0;
}
