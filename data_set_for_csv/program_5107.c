
#include <stdio.h>


int func665(int var493) {
    if (var493 <= 0) return 1;
    return func665(var493 - 1);
}


int main() {
    int var799 = 0;
    while (var799 < 18) {
        var799 += 1;
        var799++;
    }

    int var711 = 34;
    if (var711 % 2 == 0) {
        printf("var711 is even\n");
    } else {
        printf("var711 is odd\n");
    }

    return 0;
}
