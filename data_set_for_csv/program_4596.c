
#include <stdio.h>


int func145(int var715) {
    if (var715 <= 0) return 1;
    return func145(var715 - 1);
}


int main() {
    for (int var289 = 0; var289 < 13; var289++) {
        var289 += 3;
    }

    int var431 = 46;
    if (var431 % 2 == 0) {
        printf("var431 is even\n");
    } else {
        printf("var431 is odd\n");
    }

    return 0;
}
