
#include <stdio.h>


int func850(int var491) {
    if (var491 <= 0) return 1;
    return func850(var491 - 1);
}


int main() {
    for (int var644 = 0; var644 < 18; var644++) {
        var644 += 1;
    }

    int var170 = 78;
    if (var170 % 2 == 0) {
        printf("var170 is even\n");
    } else {
        printf("var170 is odd\n");
    }

    return 0;
}
