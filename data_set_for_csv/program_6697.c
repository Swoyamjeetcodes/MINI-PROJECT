
#include <stdio.h>


int func343(int var996) {
    if (var996 <= 0) return 1;
    return func343(var996 - 1);
}


int main() {
    int var131 = 0;
    while (var131 < 6) {
        var131 += 1;
        var131++;
    }

    int var935 = 32;
    if (var935 % 2 == 0) {
        printf("var935 is even\n");
    } else {
        printf("var935 is odd\n");
    }

    return 0;
}
