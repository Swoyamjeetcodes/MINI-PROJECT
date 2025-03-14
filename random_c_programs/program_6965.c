
#include <stdio.h>


int func625(int var687) {
    if (var687 <= 0) return 1;
    return func625(var687 - 1);
}


int main() {
    for (int var443 = 0; var443 < 13; var443++) {
        var443 += 5;
    }

    int var549 = 53;
    if (var549 % 2 == 0) {
        printf("var549 is even\n");
    } else {
        printf("var549 is odd\n");
    }

    return 0;
}
