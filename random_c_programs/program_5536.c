
#include <stdio.h>


int func760(int var917) {
    if (var917 <= 0) return 1;
    return func760(var917 - 1);
}


int main() {
    int var451 = 0;
    while (var451 < 15) {
        var451 += 5;
        var451++;
    }

    int var586 = 85;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    return 0;
}
