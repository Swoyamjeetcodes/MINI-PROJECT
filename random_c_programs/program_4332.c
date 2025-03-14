
#include <stdio.h>


int func360(int var963) {
    if (var963 <= 0) return 1;
    return func360(var963 - 1);
}


int main() {
    for (int var6 = 0; var6 < 20; var6++) {
        var6 += 3;
    }

    int var842 = 78;
    if (var842 % 2 == 0) {
        printf("var842 is even\n");
    } else {
        printf("var842 is odd\n");
    }

    return 0;
}
