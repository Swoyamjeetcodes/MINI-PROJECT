
#include <stdio.h>


int func782(int var305) {
    if (var305 <= 0) return 1;
    return func782(var305 - 1);
}


int main() {
    for (int var51 = 0; var51 < 7; var51++) {
        var51 += 3;
    }

    int var349 = 81;
    if (var349 % 2 == 0) {
        printf("var349 is even\n");
    } else {
        printf("var349 is odd\n");
    }

    return 0;
}
