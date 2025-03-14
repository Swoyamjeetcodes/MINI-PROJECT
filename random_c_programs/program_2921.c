
#include <stdio.h>


int func202(int var581) {
    if (var581 <= 0) return 1;
    return func202(var581 - 1);
}


int main() {
    for (int var835 = 0; var835 < 9; var835++) {
        var835 += 1;
    }

    int var83 = 34;
    if (var83 % 2 == 0) {
        printf("var83 is even\n");
    } else {
        printf("var83 is odd\n");
    }

    return 0;
}
