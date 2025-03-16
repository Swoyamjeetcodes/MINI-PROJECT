
#include <stdio.h>


int func280(int var133) {
    if (var133 <= 0) return 1;
    return func280(var133 - 1);
}


int main() {
    for (int var221 = 0; var221 < 18; var221++) {
        var221 += 2;
    }

    int var531 = 89;
    if (var531 % 2 == 0) {
        printf("var531 is even\n");
    } else {
        printf("var531 is odd\n");
    }

    return 0;
}
