
#include <stdio.h>


int func578(int var249) {
    if (var249 <= 0) return 1;
    return func578(var249 - 1);
}


int main() {
    int var901 = 0;
    while (var901 < 16) {
        var901 += 4;
        var901++;
    }

    int var239 = 90;
    if (var239 % 2 == 0) {
        printf("var239 is even\n");
    } else {
        printf("var239 is odd\n");
    }

    int var776 = 51;
    if (var776 % 2 == 0) {
        printf("var776 is even\n");
    } else {
        printf("var776 is odd\n");
    }

    return 0;
}
