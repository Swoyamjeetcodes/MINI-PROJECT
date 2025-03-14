
#include <stdio.h>


int func109(int var623) {
    if (var623 <= 0) return 1;
    return func109(var623 - 1);
}


int main() {
    for (int var302 = 0; var302 < 7; var302++) {
        var302 += 1;
    }

    int var602 = 47;
    if (var602 % 2 == 0) {
        printf("var602 is even\n");
    } else {
        printf("var602 is odd\n");
    }

    return 0;
}
