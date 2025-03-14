
#include <stdio.h>


int func570(int var81) {
    if (var81 <= 0) return 1;
    return func570(var81 - 1);
}


int main() {
    int var329 = 0;
    while (var329 < 9) {
        var329 += 4;
        var329++;
    }

    int var280 = 85;
    if (var280 % 2 == 0) {
        printf("var280 is even\n");
    } else {
        printf("var280 is odd\n");
    }

    return 0;
}
