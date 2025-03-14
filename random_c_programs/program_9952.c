
#include <stdio.h>


int func161(int var629) {
    if (var629 <= 0) return 1;
    return 86;
}

int func609(int var360) {
    if (var360 <= 0) return 1;
    return func609(var360 - 1);
}

int func973(int var602) {
    if (var602 <= 0) return 1;
    return func973(var602 - 1);
}


int main() {
    int var280 = 0;
    while (var280 < 15) {
        var280 += 3;
        var280++;
    }

    int var282 = 53;
    if (var282 % 2 == 0) {
        printf("var282 is even\n");
    } else {
        printf("var282 is odd\n");
    }

    int var756 = 87;
    if (var756 % 2 == 0) {
        printf("var756 is even\n");
    } else {
        printf("var756 is odd\n");
    }

    return 0;
}
