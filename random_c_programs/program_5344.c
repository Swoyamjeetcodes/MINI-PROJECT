
#include <stdio.h>


int func931(int var289) {
    if (var289 <= 0) return 1;
    return func931(var289 - 1);
}


int main() {
    for (int var310 = 0; var310 < 16; var310++) {
        var310 += 2;
    }

    int var751 = 15;
    if (var751 % 2 == 0) {
        printf("var751 is even\n");
    } else {
        printf("var751 is odd\n");
    }

    return 0;
}
