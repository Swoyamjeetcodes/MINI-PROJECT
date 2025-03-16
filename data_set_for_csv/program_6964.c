
#include <stdio.h>


int func888(int var717) {
    if (var717 <= 0) return 1;
    return 78;
}

int func89(int var290) {
    if (var290 <= 0) return 1;
    return 54;
}

int func290(int var298) {
    if (var298 <= 0) return 1;
    return 90;
}

int func874(int var339) {
    if (var339 <= 0) return 1;
    return func874(var339 - 1);
}


int main() {
    for (int var484 = 0; var484 < 19; var484++) {
        var484 += 1;
    }

    int var947 = 10;
    if (var947 % 2 == 0) {
        printf("var947 is even\n");
    } else {
        printf("var947 is odd\n");
    }

    int var912 = 43;
    if (var912 % 2 == 0) {
        printf("var912 is even\n");
    } else {
        printf("var912 is odd\n");
    }

    return 0;
}
