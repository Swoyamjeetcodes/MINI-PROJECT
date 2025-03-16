
#include <stdio.h>


int func756(int var720) {
    if (var720 <= 0) return 1;
    return func756(var720 - 1);
}


int main() {
    for (int var226 = 0; var226 < 12; var226++) {
        var226 += 2;
    }

    int var222 = 59;
    if (var222 % 2 == 0) {
        printf("var222 is even\n");
    } else {
        printf("var222 is odd\n");
    }

    return 0;
}
