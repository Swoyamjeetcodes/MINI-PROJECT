
#include <stdio.h>


int func781(int var33) {
    if (var33 <= 0) return 1;
    return func781(var33 - 1);
}


int main() {
    for (int var690 = 0; var690 < 18; var690++) {
        var690 += 3;
    }

    int var216 = 51;
    if (var216 % 2 == 0) {
        printf("var216 is even\n");
    } else {
        printf("var216 is odd\n");
    }

    return 0;
}
