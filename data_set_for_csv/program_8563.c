
#include <stdio.h>


int func622(int var952) {
    if (var952 <= 0) return 1;
    return func622(var952 - 1);
}


int main() {
    int var332 = 0;
    while (var332 < 18) {
        var332 += 1;
        var332++;
    }

    int var25 = 92;
    if (var25 % 2 == 0) {
        printf("var25 is even\n");
    } else {
        printf("var25 is odd\n");
    }

    return 0;
}
