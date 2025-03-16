
#include <stdio.h>


int func653(int var183) {
    if (var183 <= 0) return 1;
    return func653(var183 - 1);
}


int main() {
    for (int var626 = 0; var626 < 11; var626++) {
        var626 += 5;
    }

    int var806 = 78;
    if (var806 % 2 == 0) {
        printf("var806 is even\n");
    } else {
        printf("var806 is odd\n");
    }

    return 0;
}
