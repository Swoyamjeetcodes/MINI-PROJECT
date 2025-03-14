
#include <stdio.h>


int func459(int var53) {
    if (var53 <= 0) return 1;
    return func459(var53 - 1);
}


int main() {
    for (int var372 = 0; var372 < 11; var372++) {
        var372 += 4;
    }

    int var480 = 31;
    if (var480 % 2 == 0) {
        printf("var480 is even\n");
    } else {
        printf("var480 is odd\n");
    }

    return 0;
}
