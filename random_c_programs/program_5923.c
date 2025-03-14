
#include <stdio.h>


int func420(int var598) {
    if (var598 <= 0) return 1;
    return func420(var598 - 1);
}


int main() {
    for (int var928 = 0; var928 < 6; var928++) {
        var928 += 2;
    }

    int var968 = 86;
    if (var968 % 2 == 0) {
        printf("var968 is even\n");
    } else {
        printf("var968 is odd\n");
    }

    return 0;
}
