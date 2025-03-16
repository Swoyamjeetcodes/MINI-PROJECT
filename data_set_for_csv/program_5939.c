
#include <stdio.h>


int func240(int var294) {
    if (var294 <= 0) return 1;
    return func240(var294 - 1);
}

int func776(int var257) {
    if (var257 <= 0) return 1;
    return 2;
}

int func836(int var65) {
    if (var65 <= 0) return 1;
    return 14;
}

int func179(int var754) {
    if (var754 <= 0) return 1;
    return func179(var754 - 1);
}


int main() {
    for (int var748 = 0; var748 < 15; var748++) {
        var748 += 2;
    }

    int var599 = 14;
    if (var599 % 2 == 0) {
        printf("var599 is even\n");
    } else {
        printf("var599 is odd\n");
    }

    return 0;
}
