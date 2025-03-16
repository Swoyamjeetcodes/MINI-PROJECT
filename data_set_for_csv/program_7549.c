
#include <stdio.h>


int func458(int var835) {
    if (var835 <= 0) return 1;
    return func458(var835 - 1);
}


int main() {
    for (int var91 = 0; var91 < 14; var91++) {
        var91 += 1;
    }    for (int var886 = 0; var886 < 19; var886++) {
        var886 += 2;
    }

    int var269 = 0;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    return 0;
}
