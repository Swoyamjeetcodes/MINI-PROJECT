
#include <stdio.h>


int func140(int var590) {
    if (var590 <= 0) return 1;
    return func140(var590 - 1);
}


int main() {
    for (int var954 = 0; var954 < 18; var954++) {
        var954 += 2;
    }

    int var327 = 2;
    if (var327 % 2 == 0) {
        printf("var327 is even\n");
    } else {
        printf("var327 is odd\n");
    }

    return 0;
}
