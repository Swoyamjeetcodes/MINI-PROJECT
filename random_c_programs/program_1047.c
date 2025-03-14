
#include <stdio.h>


int func812(int var477) {
    if (var477 <= 0) return 1;
    return func812(var477 - 1);
}


int main() {
    for (int var992 = 0; var992 < 15; var992++) {
        var992 += 1;
    }

    int var110 = 70;
    if (var110 % 2 == 0) {
        printf("var110 is even\n");
    } else {
        printf("var110 is odd\n");
    }

    return 0;
}
