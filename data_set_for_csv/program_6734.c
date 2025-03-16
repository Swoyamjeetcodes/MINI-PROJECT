
#include <stdio.h>


int func292(int var251) {
    if (var251 <= 0) return 1;
    return func292(var251 - 1);
}

int func472(int var49) {
    if (var49 <= 0) return 1;
    return 11;
}


int main() {
    for (int var475 = 0; var475 < 18; var475++) {
        var475 += 5;
    }

    int var57 = 21;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    int var285 = 32;
    if (var285 % 2 == 0) {
        printf("var285 is even\n");
    } else {
        printf("var285 is odd\n");
    }

    int var349 = 59;
    if (var349 % 2 == 0) {
        printf("var349 is even\n");
    } else {
        printf("var349 is odd\n");
    }

    return 0;
}
