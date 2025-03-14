
#include <stdio.h>


int func87(int var942) {
    if (var942 <= 0) return 1;
    return func87(var942 - 1);
}


int main() {
    int var443 = 0;
    while (var443 < 8) {
        var443 += 5;
        var443++;
    }

    int var767 = 37;
    if (var767 % 2 == 0) {
        printf("var767 is even\n");
    } else {
        printf("var767 is odd\n");
    }

    return 0;
}
