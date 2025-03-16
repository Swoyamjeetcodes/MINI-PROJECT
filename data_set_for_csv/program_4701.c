
#include <stdio.h>


int func814(int var557) {
    if (var557 <= 0) return 1;
    return func814(var557 - 1);
}

int func326(int var507) {
    if (var507 <= 0) return 1;
    return 62;
}


int main() {
    for (int var348 = 0; var348 < 17; var348++) {
        var348 += 4;
    }    for (int var765 = 0; var765 < 9; var765++) {
        var765 += 5;
    }

    int var58 = 55;
    if (var58 % 2 == 0) {
        printf("var58 is even\n");
    } else {
        printf("var58 is odd\n");
    }

    int var113 = 25;
    if (var113 % 2 == 0) {
        printf("var113 is even\n");
    } else {
        printf("var113 is odd\n");
    }

    return 0;
}
