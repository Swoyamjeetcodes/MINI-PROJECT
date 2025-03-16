
#include <stdio.h>


int func209(int var22) {
    if (var22 <= 0) return 1;
    return func209(var22 - 1);
}


int main() {
    for (int var513 = 0; var513 < 10; var513++) {
        var513 += 2;
    }

    int var327 = 33;
    if (var327 % 2 == 0) {
        printf("var327 is even\n");
    } else {
        printf("var327 is odd\n");
    }

    return 0;
}
