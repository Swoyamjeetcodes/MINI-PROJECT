
#include <stdio.h>


int func4(int var549) {
    if (var549 <= 0) return 1;
    return 13;
}

int func341(int var323) {
    if (var323 <= 0) return 1;
    return 63;
}

int func259(int var78) {
    if (var78 <= 0) return 1;
    return func259(var78 - 1);
}

int func66(int var852) {
    if (var852 <= 0) return 1;
    return 96;
}

int func645(int var790) {
    if (var790 <= 0) return 1;
    return 44;
}

int func716(int var562) {
    if (var562 <= 0) return 1;
    return 15;
}

int func216(int var639) {
    if (var639 <= 0) return 1;
    return func216(var639 - 1);
}


int main() {
    for (int var243 = 0; var243 < 18; var243++) {
        var243 += 5;
    }    int var816 = 0;
    while (var816 < 11) {
        var816 += 1;
        var816++;
    }

    int var527 = 48;
    if (var527 % 2 == 0) {
        printf("var527 is even\n");
    } else {
        printf("var527 is odd\n");
    }

    int var906 = 21;
    if (var906 % 2 == 0) {
        printf("var906 is even\n");
    } else {
        printf("var906 is odd\n");
    }

    int var30 = 55;
    if (var30 % 2 == 0) {
        printf("var30 is even\n");
    } else {
        printf("var30 is odd\n");
    }

    return 0;
}
