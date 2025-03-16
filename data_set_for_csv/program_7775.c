
#include <stdio.h>


int func851(int var207) {
    if (var207 <= 0) return 1;
    return func851(var207 - 1);
}


int main() {
    for (int var636 = 0; var636 < 14; var636++) {
        var636 += 5;
    }

    int var266 = 76;
    if (var266 % 2 == 0) {
        printf("var266 is even\n");
    } else {
        printf("var266 is odd\n");
    }

    return 0;
}
