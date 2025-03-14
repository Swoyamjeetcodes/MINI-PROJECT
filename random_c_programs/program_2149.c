
#include <stdio.h>


int func238(int var914) {
    if (var914 <= 0) return 1;
    return 90;
}

int func160(int var302) {
    if (var302 <= 0) return 1;
    return func160(var302 - 1);
}

int func533(int var574) {
    if (var574 <= 0) return 1;
    return func533(var574 - 1);
}


int main() {
    int var755 = 0;
    while (var755 < 9) {
        var755 += 1;
        var755++;
    }

    int var22 = 60;
    if (var22 % 2 == 0) {
        printf("var22 is even\n");
    } else {
        printf("var22 is odd\n");
    }

    int var501 = 2;
    if (var501 % 2 == 0) {
        printf("var501 is even\n");
    } else {
        printf("var501 is odd\n");
    }

    return 0;
}
