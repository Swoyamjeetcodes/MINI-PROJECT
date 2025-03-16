
#include <stdio.h>


int func974(int var935) {
    if (var935 <= 0) return 1;
    return func974(var935 - 1);
}


int main() {
    int var795 = 0;
    while (var795 < 19) {
        var795 += 2;
        var795++;
    }

    int var63 = 99;
    if (var63 % 2 == 0) {
        printf("var63 is even\n");
    } else {
        printf("var63 is odd\n");
    }

    return 0;
}
