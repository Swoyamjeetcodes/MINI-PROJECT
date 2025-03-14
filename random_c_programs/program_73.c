
#include <stdio.h>


int func874(int var297) {
    if (var297 <= 0) return 1;
    return func874(var297 - 1);
}


int main() {
    for (int var121 = 0; var121 < 6; var121++) {
        var121 += 3;
    }

    int var197 = 93;
    if (var197 % 2 == 0) {
        printf("var197 is even\n");
    } else {
        printf("var197 is odd\n");
    }

    return 0;
}
