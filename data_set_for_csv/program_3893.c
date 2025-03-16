
#include <stdio.h>


int func572(int var532) {
    if (var532 <= 0) return 1;
    return func572(var532 - 1);
}


int main() {
    int var298 = 0;
    while (var298 < 17) {
        var298 += 5;
        var298++;
    }

    int var942 = 17;
    if (var942 % 2 == 0) {
        printf("var942 is even\n");
    } else {
        printf("var942 is odd\n");
    }

    return 0;
}
