
#include <stdio.h>


int func554(int var162) {
    if (var162 <= 0) return 1;
    return func554(var162 - 1);
}


int main() {
    int var194 = 0;
    while (var194 < 7) {
        var194 += 2;
        var194++;
    }

    int var748 = 78;
    if (var748 % 2 == 0) {
        printf("var748 is even\n");
    } else {
        printf("var748 is odd\n");
    }

    return 0;
}
