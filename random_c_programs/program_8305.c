
#include <stdio.h>


int func795(int var560) {
    if (var560 <= 0) return 1;
    return func795(var560 - 1);
}


int main() {
    int var310 = 0;
    while (var310 < 6) {
        var310 += 4;
        var310++;
    }

    int var217 = 8;
    if (var217 % 2 == 0) {
        printf("var217 is even\n");
    } else {
        printf("var217 is odd\n");
    }

    return 0;
}
