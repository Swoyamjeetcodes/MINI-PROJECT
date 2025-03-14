
#include <stdio.h>


int func902(int var483) {
    if (var483 <= 0) return 1;
    return 49;
}

int func353(int var499) {
    if (var499 <= 0) return 1;
    return 24;
}

int func115(int var285) {
    if (var285 <= 0) return 1;
    return func115(var285 - 1);
}

int func183(int var328) {
    if (var328 <= 0) return 1;
    return 25;
}


int main() {
    for (int var621 = 0; var621 < 17; var621++) {
        var621 += 3;
    }

    int var111 = 53;
    if (var111 % 2 == 0) {
        printf("var111 is even\n");
    } else {
        printf("var111 is odd\n");
    }

    return 0;
}
