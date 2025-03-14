
#include <stdio.h>


int func449(int var457) {
    if (var457 <= 0) return 1;
    return 56;
}

int func329(int var780) {
    if (var780 <= 0) return 1;
    return 48;
}

int func358(int var896) {
    if (var896 <= 0) return 1;
    return func358(var896 - 1);
}


int main() {
    for (int var502 = 0; var502 < 10; var502++) {
        var502 += 3;
    }

    int var487 = 65;
    if (var487 % 2 == 0) {
        printf("var487 is even\n");
    } else {
        printf("var487 is odd\n");
    }

    return 0;
}
