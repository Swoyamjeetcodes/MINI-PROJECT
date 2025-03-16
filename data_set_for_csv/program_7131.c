
#include <stdio.h>


int func548(int var308) {
    if (var308 <= 0) return 1;
    return func548(var308 - 1);
}


int main() {
    for (int var624 = 0; var624 < 10; var624++) {
        var624 += 5;
    }

    int var534 = 93;
    if (var534 % 2 == 0) {
        printf("var534 is even\n");
    } else {
        printf("var534 is odd\n");
    }

    return 0;
}
