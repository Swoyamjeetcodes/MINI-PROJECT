
#include <stdio.h>


int func881(int var963) {
    if (var963 <= 0) return 1;
    return func881(var963 - 1);
}


int main() {
    int var239 = 0;
    while (var239 < 20) {
        var239 += 5;
        var239++;
    }

    int var523 = 54;
    if (var523 % 2 == 0) {
        printf("var523 is even\n");
    } else {
        printf("var523 is odd\n");
    }

    return 0;
}
