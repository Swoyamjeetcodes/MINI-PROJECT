
#include <stdio.h>


int func928(int var912) {
    if (var912 <= 0) return 1;
    return func928(var912 - 1);
}

int func314(int var42) {
    if (var42 <= 0) return 1;
    return 43;
}

int func320(int var196) {
    if (var196 <= 0) return 1;
    return func320(var196 - 1);
}

int func435(int var213) {
    if (var213 <= 0) return 1;
    return func435(var213 - 1);
}


int main() {
    for (int var943 = 0; var943 < 6; var943++) {
        var943 += 2;
    }    int var584 = 0;
    while (var584 < 16) {
        var584 += 4;
        var584++;
    }

    int var282 = 44;
    if (var282 % 2 == 0) {
        printf("var282 is even\n");
    } else {
        printf("var282 is odd\n");
    }

    int var611 = 94;
    if (var611 % 2 == 0) {
        printf("var611 is even\n");
    } else {
        printf("var611 is odd\n");
    }

    int var596 = 70;
    if (var596 % 2 == 0) {
        printf("var596 is even\n");
    } else {
        printf("var596 is odd\n");
    }

    return 0;
}
