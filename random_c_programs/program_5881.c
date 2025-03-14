
#include <stdio.h>


int func253(int var532) {
    if (var532 <= 0) return 1;
    return func253(var532 - 1);
}


int main() {
    int var954 = 0;
    while (var954 < 12) {
        var954 += 4;
        var954++;
    }

    int var576 = 94;
    if (var576 % 2 == 0) {
        printf("var576 is even\n");
    } else {
        printf("var576 is odd\n");
    }

    return 0;
}
