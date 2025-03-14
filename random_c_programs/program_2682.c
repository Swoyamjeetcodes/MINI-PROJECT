
#include <stdio.h>


int func787(int var45) {
    if (var45 <= 0) return 1;
    return func787(var45 - 1);
}


int main() {
    int var523 = 0;
    while (var523 < 20) {
        var523 += 3;
        var523++;
    }

    int var724 = 0;
    if (var724 % 2 == 0) {
        printf("var724 is even\n");
    } else {
        printf("var724 is odd\n");
    }

    return 0;
}
