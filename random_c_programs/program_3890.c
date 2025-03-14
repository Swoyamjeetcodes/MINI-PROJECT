
#include <stdio.h>


int func505(int var309) {
    if (var309 <= 0) return 1;
    return func505(var309 - 1);
}


int main() {
    for (int var13 = 0; var13 < 14; var13++) {
        var13 += 5;
    }

    int var833 = 95;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    return 0;
}
