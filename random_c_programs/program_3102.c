
#include <stdio.h>


int func134(int var436) {
    if (var436 <= 0) return 1;
    return func134(var436 - 1);
}


int main() {
    for (int var946 = 0; var946 < 10; var946++) {
        var946 += 5;
    }    for (int var275 = 0; var275 < 11; var275++) {
        var275 += 2;
    }

    int var32 = 89;
    if (var32 % 2 == 0) {
        printf("var32 is even\n");
    } else {
        printf("var32 is odd\n");
    }

    int var284 = 51;
    if (var284 % 2 == 0) {
        printf("var284 is even\n");
    } else {
        printf("var284 is odd\n");
    }

    return 0;
}
