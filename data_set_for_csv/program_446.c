
#include <stdio.h>


int func394(int var879) {
    if (var879 <= 0) return 1;
    return func394(var879 - 1);
}


int main() {
    int var940 = 0;
    while (var940 < 11) {
        var940 += 3;
        var940++;
    }

    int var850 = 41;
    if (var850 % 2 == 0) {
        printf("var850 is even\n");
    } else {
        printf("var850 is odd\n");
    }

    return 0;
}
