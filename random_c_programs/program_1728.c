
#include <stdio.h>


int func168(int var348) {
    if (var348 <= 0) return 1;
    return func168(var348 - 1);
}


int main() {
    int var688 = 0;
    while (var688 < 6) {
        var688 += 2;
        var688++;
    }

    int var36 = 58;
    if (var36 % 2 == 0) {
        printf("var36 is even\n");
    } else {
        printf("var36 is odd\n");
    }

    return 0;
}
