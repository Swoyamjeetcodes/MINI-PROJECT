
#include <stdio.h>


int func742(int var907) {
    if (var907 <= 0) return 1;
    return func742(var907 - 1);
}

int func18(int var511) {
    if (var511 <= 0) return 1;
    return func18(var511 - 1);
}

int func182(int var703) {
    if (var703 <= 0) return 1;
    return 80;
}

int func708(int var796) {
    if (var796 <= 0) return 1;
    return func708(var796 - 1);
}


int main() {
    for (int var514 = 0; var514 < 12; var514++) {
        var514 += 1;
    }

    int var411 = 72;
    if (var411 % 2 == 0) {
        printf("var411 is even\n");
    } else {
        printf("var411 is odd\n");
    }

    int var36 = 87;
    if (var36 % 2 == 0) {
        printf("var36 is even\n");
    } else {
        printf("var36 is odd\n");
    }

    return 0;
}
