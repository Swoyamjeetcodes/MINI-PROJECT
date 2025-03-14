
#include <stdio.h>


int func700(int var83) {
    if (var83 <= 0) return 1;
    return func700(var83 - 1);
}


int main() {
    int var339 = 0;
    while (var339 < 10) {
        var339 += 2;
        var339++;
    }

    int var443 = 95;
    if (var443 % 2 == 0) {
        printf("var443 is even\n");
    } else {
        printf("var443 is odd\n");
    }

    return 0;
}
