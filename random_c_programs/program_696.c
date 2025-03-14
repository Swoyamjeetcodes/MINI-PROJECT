
#include <stdio.h>


int func56(int var743) {
    if (var743 <= 0) return 1;
    return func56(var743 - 1);
}


int main() {
    for (int var511 = 0; var511 < 15; var511++) {
        var511 += 4;
    }

    int var984 = 41;
    if (var984 % 2 == 0) {
        printf("var984 is even\n");
    } else {
        printf("var984 is odd\n");
    }

    return 0;
}
