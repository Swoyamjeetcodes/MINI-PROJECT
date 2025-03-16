
#include <stdio.h>


int func590(int var267) {
    if (var267 <= 0) return 1;
    return func590(var267 - 1);
}

int func712(int var67) {
    if (var67 <= 0) return 1;
    return func712(var67 - 1);
}


int main() {
    int var21 = 0;
    while (var21 < 14) {
        var21 += 3;
        var21++;
    }

    int var859 = 62;
    if (var859 % 2 == 0) {
        printf("var859 is even\n");
    } else {
        printf("var859 is odd\n");
    }

    return 0;
}
