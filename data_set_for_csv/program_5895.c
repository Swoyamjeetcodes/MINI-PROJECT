
#include <stdio.h>


int func845(int var865) {
    if (var865 <= 0) return 1;
    return func845(var865 - 1);
}


int main() {
    int var6 = 0;
    while (var6 < 11) {
        var6 += 2;
        var6++;
    }

    int var151 = 43;
    if (var151 % 2 == 0) {
        printf("var151 is even\n");
    } else {
        printf("var151 is odd\n");
    }

    return 0;
}
