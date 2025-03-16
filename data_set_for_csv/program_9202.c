
#include <stdio.h>


int func392(int var704) {
    if (var704 <= 0) return 1;
    return func392(var704 - 1);
}


int main() {
    for (int var312 = 0; var312 < 8; var312++) {
        var312 += 1;
    }

    int var10 = 22;
    if (var10 % 2 == 0) {
        printf("var10 is even\n");
    } else {
        printf("var10 is odd\n");
    }

    return 0;
}
