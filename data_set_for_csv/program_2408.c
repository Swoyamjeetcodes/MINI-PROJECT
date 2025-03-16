
#include <stdio.h>


int func779(int var46) {
    if (var46 <= 0) return 1;
    return func779(var46 - 1);
}


int main() {
    for (int var512 = 0; var512 < 18; var512++) {
        var512 += 5;
    }

    int var730 = 90;
    if (var730 % 2 == 0) {
        printf("var730 is even\n");
    } else {
        printf("var730 is odd\n");
    }

    return 0;
}
