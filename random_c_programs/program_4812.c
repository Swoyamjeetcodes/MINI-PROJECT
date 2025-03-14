
#include <stdio.h>


int func319(int var67) {
    if (var67 <= 0) return 1;
    return func319(var67 - 1);
}


int main() {
    for (int var798 = 0; var798 < 6; var798++) {
        var798 += 3;
    }

    int var269 = 42;
    if (var269 % 2 == 0) {
        printf("var269 is even\n");
    } else {
        printf("var269 is odd\n");
    }

    return 0;
}
