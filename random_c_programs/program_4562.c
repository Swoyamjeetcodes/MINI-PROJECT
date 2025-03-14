
#include <stdio.h>


int func602(int var221) {
    if (var221 <= 0) return 1;
    return func602(var221 - 1);
}


int main() {
    int var691 = 0;
    while (var691 < 5) {
        var691 += 4;
        var691++;
    }

    int var869 = 85;
    if (var869 % 2 == 0) {
        printf("var869 is even\n");
    } else {
        printf("var869 is odd\n");
    }

    return 0;
}
