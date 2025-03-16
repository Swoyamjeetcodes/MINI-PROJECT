
#include <stdio.h>


int func325(int var317) {
    if (var317 <= 0) return 1;
    return func325(var317 - 1);
}


int main() {
    for (int var979 = 0; var979 < 12; var979++) {
        var979 += 4;
    }

    int var2 = 100;
    if (var2 % 2 == 0) {
        printf("var2 is even\n");
    } else {
        printf("var2 is odd\n");
    }

    return 0;
}
