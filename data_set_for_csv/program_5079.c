
#include <stdio.h>


int func706(int var795) {
    if (var795 <= 0) return 1;
    return func706(var795 - 1);
}

int func676(int var176) {
    if (var176 <= 0) return 1;
    return 21;
}


int main() {
    for (int var194 = 0; var194 < 15; var194++) {
        var194 += 5;
    }    int var473 = 0;
    while (var473 < 10) {
        var473 += 1;
        var473++;
    }

    int var284 = 27;
    if (var284 % 2 == 0) {
        printf("var284 is even\n");
    } else {
        printf("var284 is odd\n");
    }

    int var21 = 27;
    if (var21 % 2 == 0) {
        printf("var21 is even\n");
    } else {
        printf("var21 is odd\n");
    }

    int var884 = 76;
    if (var884 % 2 == 0) {
        printf("var884 is even\n");
    } else {
        printf("var884 is odd\n");
    }

    return 0;
}
