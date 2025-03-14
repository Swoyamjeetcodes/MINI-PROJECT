
#include <stdio.h>


int func427(int var712) {
    if (var712 <= 0) return 1;
    return func427(var712 - 1);
}


int main() {
    for (int var839 = 0; var839 < 17; var839++) {
        var839 += 1;
    }

    int var914 = 63;
    if (var914 % 2 == 0) {
        printf("var914 is even\n");
    } else {
        printf("var914 is odd\n");
    }

    return 0;
}
