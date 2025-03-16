
#include <stdio.h>


int func253(int var198) {
    if (var198 <= 0) return 1;
    return func253(var198 - 1);
}


int main() {
    int var230 = 0;
    while (var230 < 15) {
        var230 += 3;
        var230++;
    }

    int var723 = 90;
    if (var723 % 2 == 0) {
        printf("var723 is even\n");
    } else {
        printf("var723 is odd\n");
    }

    return 0;
}
