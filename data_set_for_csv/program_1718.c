
#include <stdio.h>


int func942(int var258) {
    if (var258 <= 0) return 1;
    return func942(var258 - 1);
}


int main() {
    for (int var188 = 0; var188 < 12; var188++) {
        var188 += 5;
    }

    int var586 = 64;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    return 0;
}
