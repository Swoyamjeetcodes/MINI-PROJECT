
#include <stdio.h>


int func909(int var940) {
    if (var940 <= 0) return 1;
    return func909(var940 - 1);
}


int main() {
    for (int var353 = 0; var353 < 11; var353++) {
        var353 += 1;
    }

    int var91 = 8;
    if (var91 % 2 == 0) {
        printf("var91 is even\n");
    } else {
        printf("var91 is odd\n");
    }

    return 0;
}
