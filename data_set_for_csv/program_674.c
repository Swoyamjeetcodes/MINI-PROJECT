
#include <stdio.h>


int func695(int var793) {
    if (var793 <= 0) return 1;
    return func695(var793 - 1);
}


int main() {
    int var268 = 0;
    while (var268 < 6) {
        var268 += 4;
        var268++;
    }

    int var902 = 99;
    if (var902 % 2 == 0) {
        printf("var902 is even\n");
    } else {
        printf("var902 is odd\n");
    }

    return 0;
}
