
#include <stdio.h>


int func713(int var355) {
    if (var355 <= 0) return 1;
    return func713(var355 - 1);
}


int main() {
    for (int var399 = 0; var399 < 20; var399++) {
        var399 += 1;
    }

    int var1000 = 40;
    if (var1000 % 2 == 0) {
        printf("var1000 is even\n");
    } else {
        printf("var1000 is odd\n");
    }

    return 0;
}
