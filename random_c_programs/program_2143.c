
#include <stdio.h>


int func633(int var659) {
    if (var659 <= 0) return 1;
    return func633(var659 - 1);
}


int main() {
    for (int var458 = 0; var458 < 18; var458++) {
        var458 += 3;
    }

    int var886 = 30;
    if (var886 % 2 == 0) {
        printf("var886 is even\n");
    } else {
        printf("var886 is odd\n");
    }

    return 0;
}
