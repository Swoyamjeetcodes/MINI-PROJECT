
#include <stdio.h>


int func597(int var384) {
    if (var384 <= 0) return 1;
    return func597(var384 - 1);
}


int main() {
    int var922 = 0;
    while (var922 < 20) {
        var922 += 5;
        var922++;
    }

    int var379 = 64;
    if (var379 % 2 == 0) {
        printf("var379 is even\n");
    } else {
        printf("var379 is odd\n");
    }

    return 0;
}
