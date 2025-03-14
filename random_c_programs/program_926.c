
#include <stdio.h>


int func989(int var423) {
    if (var423 <= 0) return 1;
    return func989(var423 - 1);
}


int main() {
    int var662 = 0;
    while (var662 < 5) {
        var662 += 4;
        var662++;
    }

    int var545 = 14;
    if (var545 % 2 == 0) {
        printf("var545 is even\n");
    } else {
        printf("var545 is odd\n");
    }

    return 0;
}
