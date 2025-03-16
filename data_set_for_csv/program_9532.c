
#include <stdio.h>


int func190(int var696) {
    if (var696 <= 0) return 1;
    return func190(var696 - 1);
}


int main() {
    for (int var635 = 0; var635 < 9; var635++) {
        var635 += 5;
    }

    int var963 = 62;
    if (var963 % 2 == 0) {
        printf("var963 is even\n");
    } else {
        printf("var963 is odd\n");
    }

    return 0;
}
