
#include <stdio.h>


int func781(int var782) {
    if (var782 <= 0) return 1;
    return func781(var782 - 1);
}


int main() {
    for (int var551 = 0; var551 < 18; var551++) {
        var551 += 1;
    }

    int var179 = 97;
    if (var179 % 2 == 0) {
        printf("var179 is even\n");
    } else {
        printf("var179 is odd\n");
    }

    return 0;
}
