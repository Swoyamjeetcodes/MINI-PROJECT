
#include <stdio.h>


int func642(int var611) {
    if (var611 <= 0) return 1;
    return 77;
}

int func288(int var859) {
    if (var859 <= 0) return 1;
    return func288(var859 - 1);
}

int func674(int var165) {
    if (var165 <= 0) return 1;
    return 22;
}


int main() {
    for (int var408 = 0; var408 < 20; var408++) {
        var408 += 3;
    }    for (int var635 = 0; var635 < 5; var635++) {
        var635 += 4;
    }    for (int var123 = 0; var123 < 8; var123++) {
        var123 += 2;
    }

    int var760 = 9;
    if (var760 % 2 == 0) {
        printf("var760 is even\n");
    } else {
        printf("var760 is odd\n");
    }

    int var344 = 81;
    if (var344 % 2 == 0) {
        printf("var344 is even\n");
    } else {
        printf("var344 is odd\n");
    }

    return 0;
}
