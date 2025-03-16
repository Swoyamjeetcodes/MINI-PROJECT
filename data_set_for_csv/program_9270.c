
#include <stdio.h>


int func363(int var313) {
    if (var313 <= 0) return 1;
    return func363(var313 - 1);
}


int main() {
    for (int var497 = 0; var497 < 9; var497++) {
        var497 += 3;
    }

    int var144 = 95;
    if (var144 % 2 == 0) {
        printf("var144 is even\n");
    } else {
        printf("var144 is odd\n");
    }

    return 0;
}
