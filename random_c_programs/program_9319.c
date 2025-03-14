
#include <stdio.h>


int func19(int var836) {
    if (var836 <= 0) return 1;
    return func19(var836 - 1);
}

int func123(int var744) {
    if (var744 <= 0) return 1;
    return 19;
}

int func435(int var805) {
    if (var805 <= 0) return 1;
    return func435(var805 - 1);
}

int func333(int var992) {
    if (var992 <= 0) return 1;
    return func333(var992 - 1);
}

int func8(int var14) {
    if (var14 <= 0) return 1;
    return func8(var14 - 1);
}


int main() {
    int var147 = 0;
    while (var147 < 20) {
        var147 += 3;
        var147++;
    }    for (int var553 = 0; var553 < 17; var553++) {
        var553 += 2;
    }

    int var294 = 87;
    if (var294 % 2 == 0) {
        printf("var294 is even\n");
    } else {
        printf("var294 is odd\n");
    }

    int var265 = 59;
    if (var265 % 2 == 0) {
        printf("var265 is even\n");
    } else {
        printf("var265 is odd\n");
    }

    int var734 = 82;
    if (var734 % 2 == 0) {
        printf("var734 is even\n");
    } else {
        printf("var734 is odd\n");
    }

    return 0;
}
