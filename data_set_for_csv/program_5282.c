
#include <stdio.h>


int func802(int var488) {
    if (var488 <= 0) return 1;
    return func802(var488 - 1);
}


int main() {
    for (int var468 = 0; var468 < 17; var468++) {
        var468 += 2;
    }

    int var595 = 74;
    if (var595 % 2 == 0) {
        printf("var595 is even\n");
    } else {
        printf("var595 is odd\n");
    }

    int var509 = 81;
    if (var509 % 2 == 0) {
        printf("var509 is even\n");
    } else {
        printf("var509 is odd\n");
    }

    return 0;
}
