
#include <stdio.h>


int func763(int var787) {
    if (var787 <= 0) return 1;
    return func763(var787 - 1);
}


int main() {
    for (int var760 = 0; var760 < 19; var760++) {
        var760 += 2;
    }

    int var280 = 56;
    if (var280 % 2 == 0) {
        printf("var280 is even\n");
    } else {
        printf("var280 is odd\n");
    }

    return 0;
}
