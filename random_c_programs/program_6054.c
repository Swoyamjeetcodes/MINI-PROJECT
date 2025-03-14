
#include <stdio.h>


int func986(int var395) {
    if (var395 <= 0) return 1;
    return func986(var395 - 1);
}


int main() {
    for (int var878 = 0; var878 < 10; var878++) {
        var878 += 4;
    }

    int var412 = 69;
    if (var412 % 2 == 0) {
        printf("var412 is even\n");
    } else {
        printf("var412 is odd\n");
    }

    return 0;
}
