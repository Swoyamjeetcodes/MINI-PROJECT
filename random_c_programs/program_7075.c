
#include <stdio.h>


int func365(int var55) {
    if (var55 <= 0) return 1;
    return func365(var55 - 1);
}


int main() {
    int var889 = 0;
    while (var889 < 14) {
        var889 += 1;
        var889++;
    }

    int var270 = 55;
    if (var270 % 2 == 0) {
        printf("var270 is even\n");
    } else {
        printf("var270 is odd\n");
    }

    return 0;
}
