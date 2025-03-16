
#include <stdio.h>


int func426(int var35) {
    if (var35 <= 0) return 1;
    return func426(var35 - 1);
}


int main() {
    for (int var833 = 0; var833 < 13; var833++) {
        var833 += 5;
    }

    int var229 = 81;
    if (var229 % 2 == 0) {
        printf("var229 is even\n");
    } else {
        printf("var229 is odd\n");
    }

    return 0;
}
