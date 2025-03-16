
#include <stdio.h>


int func58(int var788) {
    if (var788 <= 0) return 1;
    return 88;
}

int func698(int var547) {
    if (var547 <= 0) return 1;
    return 19;
}

int func670(int var705) {
    if (var705 <= 0) return 1;
    return func670(var705 - 1);
}

int func931(int var473) {
    if (var473 <= 0) return 1;
    return func931(var473 - 1);
}

int func958(int var97) {
    if (var97 <= 0) return 1;
    return func958(var97 - 1);
}


int main() {
    for (int var76 = 0; var76 < 19; var76++) {
        var76 += 4;
    }

    int var111 = 14;
    if (var111 % 2 == 0) {
        printf("var111 is even\n");
    } else {
        printf("var111 is odd\n");
    }

    int var489 = 36;
    if (var489 % 2 == 0) {
        printf("var489 is even\n");
    } else {
        printf("var489 is odd\n");
    }

    return 0;
}
