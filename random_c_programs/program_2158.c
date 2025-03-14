
#include <stdio.h>


int func70(int var635) {
    if (var635 <= 0) return 1;
    return func70(var635 - 1);
}


int main() {
    for (int var870 = 0; var870 < 15; var870++) {
        var870 += 3;
    }

    int var284 = 24;
    if (var284 % 2 == 0) {
        printf("var284 is even\n");
    } else {
        printf("var284 is odd\n");
    }

    return 0;
}
