
#include <stdio.h>


int func789(int var830) {
    if (var830 <= 0) return 1;
    return 77;
}

int func742(int var264) {
    if (var264 <= 0) return 1;
    return func742(var264 - 1);
}

int func572(int var993) {
    if (var993 <= 0) return 1;
    return func572(var993 - 1);
}

int func844(int var727) {
    if (var727 <= 0) return 1;
    return func844(var727 - 1);
}


int main() {
    int var426 = 0;
    while (var426 < 14) {
        var426 += 4;
        var426++;
    }

    int var780 = 66;
    if (var780 % 2 == 0) {
        printf("var780 is even\n");
    } else {
        printf("var780 is odd\n");
    }

    int var8 = 37;
    if (var8 % 2 == 0) {
        printf("var8 is even\n");
    } else {
        printf("var8 is odd\n");
    }

    int var747 = 87;
    if (var747 % 2 == 0) {
        printf("var747 is even\n");
    } else {
        printf("var747 is odd\n");
    }

    return 0;
}
