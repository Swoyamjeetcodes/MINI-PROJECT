
#include <stdio.h>


int func523(int var492) {
    if (var492 <= 0) return 1;
    return func523(var492 - 1);
}


int main() {
    for (int var795 = 0; var795 < 9; var795++) {
        var795 += 4;
    }

    int var381 = 10;
    if (var381 % 2 == 0) {
        printf("var381 is even\n");
    } else {
        printf("var381 is odd\n");
    }

    return 0;
}
