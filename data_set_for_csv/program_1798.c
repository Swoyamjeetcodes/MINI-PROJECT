
#include <stdio.h>


int func319(int var15) {
    if (var15 <= 0) return 1;
    return func319(var15 - 1);
}


int main() {
    for (int var114 = 0; var114 < 17; var114++) {
        var114 += 1;
    }

    int var573 = 29;
    if (var573 % 2 == 0) {
        printf("var573 is even\n");
    } else {
        printf("var573 is odd\n");
    }

    return 0;
}
