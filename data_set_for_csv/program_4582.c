
#include <stdio.h>


int func663(int var420) {
    if (var420 <= 0) return 1;
    return func663(var420 - 1);
}


int main() {
    int var266 = 0;
    while (var266 < 18) {
        var266 += 1;
        var266++;
    }

    int var867 = 92;
    if (var867 % 2 == 0) {
        printf("var867 is even\n");
    } else {
        printf("var867 is odd\n");
    }

    return 0;
}
