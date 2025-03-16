
#include <stdio.h>


int func865(int var229) {
    if (var229 <= 0) return 1;
    return func865(var229 - 1);
}


int main() {
    int var576 = 0;
    while (var576 < 16) {
        var576 += 3;
        var576++;
    }

    int var657 = 36;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    return 0;
}
