
#include <stdio.h>


int func666(int var372) {
    if (var372 <= 0) return 1;
    return func666(var372 - 1);
}


int main() {
    for (int var34 = 0; var34 < 11; var34++) {
        var34 += 3;
    }

    int var651 = 0;
    if (var651 % 2 == 0) {
        printf("var651 is even\n");
    } else {
        printf("var651 is odd\n");
    }

    return 0;
}
