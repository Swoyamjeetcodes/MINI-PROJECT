
#include <stdio.h>


int func712(int var511) {
    if (var511 <= 0) return 1;
    return func712(var511 - 1);
}


int main() {
    for (int var285 = 0; var285 < 9; var285++) {
        var285 += 4;
    }

    int var605 = 30;
    if (var605 % 2 == 0) {
        printf("var605 is even\n");
    } else {
        printf("var605 is odd\n");
    }

    return 0;
}
