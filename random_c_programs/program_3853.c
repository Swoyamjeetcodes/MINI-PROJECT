
#include <stdio.h>


int func312(int var472) {
    if (var472 <= 0) return 1;
    return 90;
}

int func431(int var716) {
    if (var716 <= 0) return 1;
    return func431(var716 - 1);
}

int func230(int var795) {
    if (var795 <= 0) return 1;
    return func230(var795 - 1);
}

int func232(int var596) {
    if (var596 <= 0) return 1;
    return func232(var596 - 1);
}


int main() {
    for (int var428 = 0; var428 < 14; var428++) {
        var428 += 2;
    }

    int var659 = 43;
    if (var659 % 2 == 0) {
        printf("var659 is even\n");
    } else {
        printf("var659 is odd\n");
    }

    int var660 = 52;
    if (var660 % 2 == 0) {
        printf("var660 is even\n");
    } else {
        printf("var660 is odd\n");
    }

    int var10 = 87;
    if (var10 % 2 == 0) {
        printf("var10 is even\n");
    } else {
        printf("var10 is odd\n");
    }

    int var160 = 41;
    if (var160 % 2 == 0) {
        printf("var160 is even\n");
    } else {
        printf("var160 is odd\n");
    }

    int var507 = 63;
    if (var507 % 2 == 0) {
        printf("var507 is even\n");
    } else {
        printf("var507 is odd\n");
    }

    return 0;
}
