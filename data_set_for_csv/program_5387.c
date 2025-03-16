
#include <stdio.h>


int func231(int var211) {
    if (var211 <= 0) return 1;
    return func231(var211 - 1);
}


int main() {
    for (int var255 = 0; var255 < 9; var255++) {
        var255 += 1;
    }

    int var721 = 84;
    if (var721 % 2 == 0) {
        printf("var721 is even\n");
    } else {
        printf("var721 is odd\n");
    }

    return 0;
}
