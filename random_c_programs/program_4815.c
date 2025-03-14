
#include <stdio.h>


int func111(int var533) {
    if (var533 <= 0) return 1;
    return func111(var533 - 1);
}

int func660(int var665) {
    if (var665 <= 0) return 1;
    return func660(var665 - 1);
}


int main() {
    for (int var855 = 0; var855 < 6; var855++) {
        var855 += 3;
    }    int var164 = 0;
    while (var164 < 8) {
        var164 += 2;
        var164++;
    }    for (int var305 = 0; var305 < 9; var305++) {
        var305 += 5;
    }

    int var372 = 37;
    if (var372 % 2 == 0) {
        printf("var372 is even\n");
    } else {
        printf("var372 is odd\n");
    }

    int var183 = 98;
    if (var183 % 2 == 0) {
        printf("var183 is even\n");
    } else {
        printf("var183 is odd\n");
    }

    return 0;
}
