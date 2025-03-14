
#include <stdio.h>


int func168(int var86) {
    if (var86 <= 0) return 1;
    return func168(var86 - 1);
}


int main() {
    for (int var699 = 0; var699 < 11; var699++) {
        var699 += 3;
    }

    int var173 = 83;
    if (var173 % 2 == 0) {
        printf("var173 is even\n");
    } else {
        printf("var173 is odd\n");
    }

    return 0;
}
