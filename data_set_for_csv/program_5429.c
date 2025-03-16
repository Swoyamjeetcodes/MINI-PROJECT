
#include <stdio.h>


int func73(int var751) {
    if (var751 <= 0) return 1;
    return func73(var751 - 1);
}


int main() {
    for (int var639 = 0; var639 < 17; var639++) {
        var639 += 2;
    }

    int var46 = 34;
    if (var46 % 2 == 0) {
        printf("var46 is even\n");
    } else {
        printf("var46 is odd\n");
    }

    return 0;
}
