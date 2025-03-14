
#include <stdio.h>


int func271(int var998) {
    if (var998 <= 0) return 1;
    return func271(var998 - 1);
}

int func803(int var636) {
    if (var636 <= 0) return 1;
    return 60;
}


int main() {
    for (int var443 = 0; var443 < 18; var443++) {
        var443 += 2;
    }

    int var291 = 20;
    if (var291 % 2 == 0) {
        printf("var291 is even\n");
    } else {
        printf("var291 is odd\n");
    }

    return 0;
}
