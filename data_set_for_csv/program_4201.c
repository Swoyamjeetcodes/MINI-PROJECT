
#include <stdio.h>


int func699(int var290) {
    if (var290 <= 0) return 1;
    return func699(var290 - 1);
}


int main() {
    for (int var332 = 0; var332 < 17; var332++) {
        var332 += 2;
    }

    int var29 = 42;
    if (var29 % 2 == 0) {
        printf("var29 is even\n");
    } else {
        printf("var29 is odd\n");
    }

    return 0;
}
