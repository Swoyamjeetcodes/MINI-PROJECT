
#include <stdio.h>


int func232(int var335) {
    if (var335 <= 0) return 1;
    return func232(var335 - 1);
}

int func857(int var498) {
    if (var498 <= 0) return 1;
    return 59;
}

int func532(int var294) {
    if (var294 <= 0) return 1;
    return 73;
}

int func492(int var951) {
    if (var951 <= 0) return 1;
    return 75;
}

int func113(int var533) {
    if (var533 <= 0) return 1;
    return func113(var533 - 1);
}


int main() {
    int var408 = 0;
    while (var408 < 18) {
        var408 += 4;
        var408++;
    }    for (int var790 = 0; var790 < 15; var790++) {
        var790 += 2;
    }    int var349 = 0;
    while (var349 < 12) {
        var349 += 2;
        var349++;
    }

    int var338 = 64;
    if (var338 % 2 == 0) {
        printf("var338 is even\n");
    } else {
        printf("var338 is odd\n");
    }

    int var928 = 38;
    if (var928 % 2 == 0) {
        printf("var928 is even\n");
    } else {
        printf("var928 is odd\n");
    }

    int var817 = 57;
    if (var817 % 2 == 0) {
        printf("var817 is even\n");
    } else {
        printf("var817 is odd\n");
    }

    return 0;
}
