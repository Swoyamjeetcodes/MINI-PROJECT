
#include <stdio.h>


int func321(int var634) {
    if (var634 <= 0) return 1;
    return func321(var634 - 1);
}


int main() {
    for (int var600 = 0; var600 < 6; var600++) {
        var600 += 5;
    }

    int var443 = 70;
    if (var443 % 2 == 0) {
        printf("var443 is even\n");
    } else {
        printf("var443 is odd\n");
    }

    return 0;
}
