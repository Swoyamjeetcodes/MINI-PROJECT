
#include <stdio.h>


int func243(int var147) {
    if (var147 <= 0) return 1;
    return func243(var147 - 1);
}


int main() {
    for (int var473 = 0; var473 < 5; var473++) {
        var473 += 4;
    }

    int var886 = 78;
    if (var886 % 2 == 0) {
        printf("var886 is even\n");
    } else {
        printf("var886 is odd\n");
    }

    return 0;
}
