
#include <stdio.h>


int func5(int var621) {
    if (var621 <= 0) return 1;
    return func5(var621 - 1);
}


int main() {
    for (int var333 = 0; var333 < 14; var333++) {
        var333 += 4;
    }

    int var499 = 75;
    if (var499 % 2 == 0) {
        printf("var499 is even\n");
    } else {
        printf("var499 is odd\n");
    }

    return 0;
}
