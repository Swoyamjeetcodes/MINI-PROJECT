
#include <stdio.h>


int func393(int var997) {
    if (var997 <= 0) return 1;
    return func393(var997 - 1);
}


int main() {
    int var51 = 0;
    while (var51 < 12) {
        var51 += 1;
        var51++;
    }

    int var82 = 82;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    int var625 = 76;
    if (var625 % 2 == 0) {
        printf("var625 is even\n");
    } else {
        printf("var625 is odd\n");
    }

    int var628 = 19;
    if (var628 % 2 == 0) {
        printf("var628 is even\n");
    } else {
        printf("var628 is odd\n");
    }

    return 0;
}
