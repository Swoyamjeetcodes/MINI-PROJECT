
#include <stdio.h>


int func478(int var354) {
    if (var354 <= 0) return 1;
    return func478(var354 - 1);
}


int main() {
    for (int var308 = 0; var308 < 6; var308++) {
        var308 += 5;
    }

    int var643 = 40;
    if (var643 % 2 == 0) {
        printf("var643 is even\n");
    } else {
        printf("var643 is odd\n");
    }

    return 0;
}
