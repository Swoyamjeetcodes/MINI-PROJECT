
#include <stdio.h>


int func536(int var250) {
    if (var250 <= 0) return 1;
    return func536(var250 - 1);
}


int main() {
    for (int var160 = 0; var160 < 15; var160++) {
        var160 += 2;
    }

    int var397 = 29;
    if (var397 % 2 == 0) {
        printf("var397 is even\n");
    } else {
        printf("var397 is odd\n");
    }

    return 0;
}
