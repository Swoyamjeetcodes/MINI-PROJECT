
#include <stdio.h>


int func671(int var199) {
    if (var199 <= 0) return 1;
    return func671(var199 - 1);
}


int main() {
    int var357 = 0;
    while (var357 < 17) {
        var357 += 4;
        var357++;
    }

    int var354 = 21;
    if (var354 % 2 == 0) {
        printf("var354 is even\n");
    } else {
        printf("var354 is odd\n");
    }

    return 0;
}
