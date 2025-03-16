
#include <stdio.h>


int func305(int var254) {
    if (var254 <= 0) return 1;
    return func305(var254 - 1);
}


int main() {
    for (int var699 = 0; var699 < 19; var699++) {
        var699 += 1;
    }

    int var854 = 79;
    if (var854 % 2 == 0) {
        printf("var854 is even\n");
    } else {
        printf("var854 is odd\n");
    }

    return 0;
}
