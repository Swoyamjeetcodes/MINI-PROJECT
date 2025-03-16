
#include <stdio.h>


int func402(int var170) {
    if (var170 <= 0) return 1;
    return func402(var170 - 1);
}


int main() {
    for (int var226 = 0; var226 < 12; var226++) {
        var226 += 1;
    }    int var962 = 0;
    while (var962 < 6) {
        var962 += 5;
        var962++;
    }

    int var975 = 77;
    if (var975 % 2 == 0) {
        printf("var975 is even\n");
    } else {
        printf("var975 is odd\n");
    }

    return 0;
}
