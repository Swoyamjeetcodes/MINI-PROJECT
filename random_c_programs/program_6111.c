
#include <stdio.h>


int func602(int var869) {
    if (var869 <= 0) return 1;
    return func602(var869 - 1);
}

int func358(int var160) {
    if (var160 <= 0) return 1;
    return 49;
}

int func152(int var702) {
    if (var702 <= 0) return 1;
    return 4;
}


int main() {
    for (int var936 = 0; var936 < 7; var936++) {
        var936 += 3;
    }

    int var675 = 73;
    if (var675 % 2 == 0) {
        printf("var675 is even\n");
    } else {
        printf("var675 is odd\n");
    }

    int var931 = 68;
    if (var931 % 2 == 0) {
        printf("var931 is even\n");
    } else {
        printf("var931 is odd\n");
    }

    return 0;
}
