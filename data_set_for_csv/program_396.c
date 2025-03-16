
#include <stdio.h>


int func86(int var928) {
    if (var928 <= 0) return 1;
    return func86(var928 - 1);
}


int main() {
    int var684 = 0;
    while (var684 < 5) {
        var684 += 3;
        var684++;
    }

    int var534 = 85;
    if (var534 % 2 == 0) {
        printf("var534 is even\n");
    } else {
        printf("var534 is odd\n");
    }

    return 0;
}
