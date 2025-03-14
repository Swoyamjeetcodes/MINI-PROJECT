
#include <stdio.h>


int func91(int var959) {
    if (var959 <= 0) return 1;
    return func91(var959 - 1);
}


int main() {
    int var990 = 0;
    while (var990 < 9) {
        var990 += 5;
        var990++;
    }

    int var90 = 72;
    if (var90 % 2 == 0) {
        printf("var90 is even\n");
    } else {
        printf("var90 is odd\n");
    }

    return 0;
}
