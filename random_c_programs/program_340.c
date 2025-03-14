
#include <stdio.h>


int func756(int var282) {
    if (var282 <= 0) return 1;
    return func756(var282 - 1);
}


int main() {
    int var413 = 0;
    while (var413 < 20) {
        var413 += 1;
        var413++;
    }

    int var216 = 13;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    return 0;
}
