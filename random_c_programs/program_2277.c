
#include <stdio.h>


int func653(int var507) {
    if (var507 <= 0) return 1;
    return func653(var507 - 1);
}


int main() {
    for (int var337 = 0; var337 < 14; var337++) {
        var337 += 5;
    }

    int var710 = 59;
    if (var710 % 2 == 0) {
        printf("var710 is even\n");
    } else {
        printf("var710 is odd\n");
    }

    return 0;
}
