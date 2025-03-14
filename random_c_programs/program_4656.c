
#include <stdio.h>


int func539(int var975) {
    if (var975 <= 0) return 1;
    return func539(var975 - 1);
}


int main() {
    int var387 = 0;
    while (var387 < 10) {
        var387 += 1;
        var387++;
    }

    int var591 = 30;
    if (var591 % 2 == 0) {
        printf("var591 is even\n");
    } else {
        printf("var591 is odd\n");
    }

    return 0;
}
