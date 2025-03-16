
#include <stdio.h>


int func131(int var364) {
    if (var364 <= 0) return 1;
    return func131(var364 - 1);
}


int main() {
    int var290 = 0;
    while (var290 < 12) {
        var290 += 1;
        var290++;
    }

    int var277 = 73;
    if (var277 % 2 == 0) {
        printf("var277 is even\n");
    } else {
        printf("var277 is odd\n");
    }

    return 0;
}
