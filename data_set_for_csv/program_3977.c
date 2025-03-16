
#include <stdio.h>


int func888(int var609) {
    if (var609 <= 0) return 1;
    return func888(var609 - 1);
}


int main() {
    int var511 = 0;
    while (var511 < 5) {
        var511 += 5;
        var511++;
    }

    int var339 = 42;
    if (var339 % 2 == 0) {
        printf("var339 is even\n");
    } else {
        printf("var339 is odd\n");
    }

    return 0;
}
