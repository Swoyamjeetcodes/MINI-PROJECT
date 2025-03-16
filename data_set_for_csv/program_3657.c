
#include <stdio.h>


int func784(int var606) {
    if (var606 <= 0) return 1;
    return func784(var606 - 1);
}


int main() {
    for (int var533 = 0; var533 < 5; var533++) {
        var533 += 1;
    }

    int var346 = 10;
    if (var346 % 2 == 0) {
        printf("var346 is even\n");
    } else {
        printf("var346 is odd\n");
    }

    return 0;
}
