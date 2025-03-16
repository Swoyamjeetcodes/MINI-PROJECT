
#include <stdio.h>


int func362(int var90) {
    if (var90 <= 0) return 1;
    return func362(var90 - 1);
}


int main() {
    for (int var268 = 0; var268 < 19; var268++) {
        var268 += 4;
    }

    int var685 = 55;
    if (var685 % 2 == 0) {
        printf("var685 is even\n");
    } else {
        printf("var685 is odd\n");
    }

    return 0;
}
