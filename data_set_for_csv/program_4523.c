
#include <stdio.h>


int func569(int var476) {
    if (var476 <= 0) return 1;
    return func569(var476 - 1);
}


int main() {
    int var418 = 0;
    while (var418 < 11) {
        var418 += 3;
        var418++;
    }

    int var164 = 19;
    if (var164 % 2 == 0) {
        printf("var164 is even\n");
    } else {
        printf("var164 is odd\n");
    }

    return 0;
}
