
#include <stdio.h>


int func143(int var533) {
    if (var533 <= 0) return 1;
    return func143(var533 - 1);
}


int main() {
    int var610 = 0;
    while (var610 < 12) {
        var610 += 3;
        var610++;
    }

    int var214 = 43;
    if (var214 % 2 == 0) {
        printf("var214 is even\n");
    } else {
        printf("var214 is odd\n");
    }

    return 0;
}
