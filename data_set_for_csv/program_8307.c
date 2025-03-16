
#include <stdio.h>


int func738(int var47) {
    if (var47 <= 0) return 1;
    return func738(var47 - 1);
}


int main() {
    for (int var346 = 0; var346 < 10; var346++) {
        var346 += 2;
    }

    int var703 = 25;
    if (var703 % 2 == 0) {
        printf("var703 is even\n");
    } else {
        printf("var703 is odd\n");
    }

    return 0;
}
