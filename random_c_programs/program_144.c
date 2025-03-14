
#include <stdio.h>


int func230(int var418) {
    if (var418 <= 0) return 1;
    return func230(var418 - 1);
}

int func523(int var631) {
    if (var631 <= 0) return 1;
    return 18;
}


int main() {
    for (int var606 = 0; var606 < 15; var606++) {
        var606 += 2;
    }

    int var131 = 46;
    if (var131 % 2 == 0) {
        printf("var131 is even\n");
    } else {
        printf("var131 is odd\n");
    }

    int var683 = 49;
    if (var683 % 2 == 0) {
        printf("var683 is even\n");
    } else {
        printf("var683 is odd\n");
    }

    return 0;
}
