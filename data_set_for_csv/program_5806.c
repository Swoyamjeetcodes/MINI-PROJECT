
#include <stdio.h>


int func14(int var963) {
    if (var963 <= 0) return 1;
    return func14(var963 - 1);
}


int main() {
    for (int var60 = 0; var60 < 8; var60++) {
        var60 += 3;
    }

    int var267 = 9;
    if (var267 % 2 == 0) {
        printf("var267 is even\n");
    } else {
        printf("var267 is odd\n");
    }

    return 0;
}
