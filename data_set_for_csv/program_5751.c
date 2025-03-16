
#include <stdio.h>


int func547(int var456) {
    if (var456 <= 0) return 1;
    return func547(var456 - 1);
}


int main() {
    int var327 = 0;
    while (var327 < 16) {
        var327 += 3;
        var327++;
    }

    int var354 = 13;
    if (var354 % 2 == 0) {
        printf("var354 is even\n");
    } else {
        printf("var354 is odd\n");
    }

    return 0;
}
