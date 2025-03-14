
#include <stdio.h>


int func825(int var423) {
    if (var423 <= 0) return 1;
    return func825(var423 - 1);
}

int func973(int var990) {
    if (var990 <= 0) return 1;
    return func973(var990 - 1);
}

int func902(int var286) {
    if (var286 <= 0) return 1;
    return func902(var286 - 1);
}


int main() {
    for (int var316 = 0; var316 < 5; var316++) {
        var316 += 2;
    }    for (int var160 = 0; var160 < 8; var160++) {
        var160 += 1;
    }

    int var389 = 69;
    if (var389 % 2 == 0) {
        printf("var389 is even\n");
    } else {
        printf("var389 is odd\n");
    }

    int var511 = 67;
    if (var511 % 2 == 0) {
        printf("var511 is even\n");
    } else {
        printf("var511 is odd\n");
    }

    return 0;
}
