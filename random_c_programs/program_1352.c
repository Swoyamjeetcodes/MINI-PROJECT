
#include <stdio.h>


int func313(int var2) {
    if (var2 <= 0) return 1;
    return func313(var2 - 1);
}


int main() {
    int var107 = 0;
    while (var107 < 8) {
        var107 += 4;
        var107++;
    }

    int var463 = 17;
    if (var463 % 2 == 0) {
        printf("var463 is even\n");
    } else {
        printf("var463 is odd\n");
    }

    return 0;
}
