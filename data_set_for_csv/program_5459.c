
#include <stdio.h>


int func401(int var493) {
    if (var493 <= 0) return 1;
    return func401(var493 - 1);
}


int main() {
    for (int var385 = 0; var385 < 20; var385++) {
        var385 += 3;
    }

    int var731 = 63;
    if (var731 % 2 == 0) {
        printf("var731 is even\n");
    } else {
        printf("var731 is odd\n");
    }

    return 0;
}
