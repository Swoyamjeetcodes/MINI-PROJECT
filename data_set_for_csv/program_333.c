
#include <stdio.h>


int func451(int var424) {
    if (var424 <= 0) return 1;
    return func451(var424 - 1);
}


int main() {
    for (int var148 = 0; var148 < 18; var148++) {
        var148 += 4;
    }

    int var354 = 53;
    if (var354 % 2 == 0) {
        printf("var354 is even\n");
    } else {
        printf("var354 is odd\n");
    }

    return 0;
}
