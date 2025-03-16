
#include <stdio.h>


int func533(int var209) {
    if (var209 <= 0) return 1;
    return func533(var209 - 1);
}


int main() {
    int var292 = 0;
    while (var292 < 9) {
        var292 += 4;
        var292++;
    }    int var588 = 0;
    while (var588 < 15) {
        var588 += 3;
        var588++;
    }

    int var790 = 30;
    if (var790 % 2 == 0) {
        printf("var790 is even\n");
    } else {
        printf("var790 is odd\n");
    }

    return 0;
}
