
#include <stdio.h>


int func423(int var1) {
    if (var1 <= 0) return 1;
    return func423(var1 - 1);
}


int main() {
    int var161 = 0;
    while (var161 < 10) {
        var161 += 3;
        var161++;
    }

    int var699 = 80;
    if (var699 % 2 == 0) {
        printf("var699 is even\n");
    } else {
        printf("var699 is odd\n");
    }

    return 0;
}
