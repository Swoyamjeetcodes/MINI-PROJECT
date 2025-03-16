
#include <stdio.h>


int func310(int var53) {
    if (var53 <= 0) return 1;
    return func310(var53 - 1);
}


int main() {
    for (int var544 = 0; var544 < 13; var544++) {
        var544 += 3;
    }

    int var154 = 73;
    if (var154 % 2 == 0) {
        printf("var154 is even\n");
    } else {
        printf("var154 is odd\n");
    }

    return 0;
}
