
#include <stdio.h>


int func215(int var645) {
    if (var645 <= 0) return 1;
    return func215(var645 - 1);
}

int func204(int var711) {
    if (var711 <= 0) return 1;
    return 97;
}

int func881(int var100) {
    if (var100 <= 0) return 1;
    return func881(var100 - 1);
}

int func608(int var836) {
    if (var836 <= 0) return 1;
    return 83;
}

int func771(int var122) {
    if (var122 <= 0) return 1;
    return 99;
}


int main() {
    for (int var843 = 0; var843 < 7; var843++) {
        var843 += 5;
    }    for (int var628 = 0; var628 < 5; var628++) {
        var628 += 1;
    }

    int var619 = 64;
    if (var619 % 2 == 0) {
        printf("var619 is even\n");
    } else {
        printf("var619 is odd\n");
    }

    int var553 = 4;
    if (var553 % 2 == 0) {
        printf("var553 is even\n");
    } else {
        printf("var553 is odd\n");
    }

    int var268 = 4;
    if (var268 % 2 == 0) {
        printf("var268 is even\n");
    } else {
        printf("var268 is odd\n");
    }

    return 0;
}
