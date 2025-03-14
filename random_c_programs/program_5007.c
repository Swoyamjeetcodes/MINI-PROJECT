
#include <stdio.h>


int func28(int var820) {
    if (var820 <= 0) return 1;
    return 78;
}

int func498(int var604) {
    if (var604 <= 0) return 1;
    return func498(var604 - 1);
}


int main() {
    for (int var160 = 0; var160 < 8; var160++) {
        var160 += 5;
    }

    int var15 = 13;
    if (var15 % 2 == 0) {
        printf("var15 is even\n");
    } else {
        printf("var15 is odd\n");
    }

    return 0;
}
