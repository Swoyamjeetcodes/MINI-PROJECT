
#include <stdio.h>


int func633(int var504) {
    if (var504 <= 0) return 1;
    return func633(var504 - 1);
}


int main() {
    for (int var454 = 0; var454 < 13; var454++) {
        var454 += 3;
    }

    int var655 = 31;
    if (var655 % 2 == 0) {
        printf("var655 is even\n");
    } else {
        printf("var655 is odd\n");
    }

    return 0;
}
