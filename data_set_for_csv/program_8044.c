
#include <stdio.h>


int func329(int var979) {
    if (var979 <= 0) return 1;
    return func329(var979 - 1);
}


int main() {
    int var51 = 0;
    while (var51 < 10) {
        var51 += 4;
        var51++;
    }

    int var274 = 35;
    if (var274 % 2 == 0) {
        printf("var274 is even\n");
    } else {
        printf("var274 is odd\n");
    }

    return 0;
}
