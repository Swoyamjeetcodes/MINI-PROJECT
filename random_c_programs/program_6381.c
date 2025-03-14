
#include <stdio.h>


int func943(int var874) {
    if (var874 <= 0) return 1;
    return func943(var874 - 1);
}


int main() {
    for (int var453 = 0; var453 < 19; var453++) {
        var453 += 5;
    }

    int var472 = 77;
    if (var472 % 2 == 0) {
        printf("var472 is even\n");
    } else {
        printf("var472 is odd\n");
    }

    return 0;
}
