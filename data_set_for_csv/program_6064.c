
#include <stdio.h>


int func873(int var28) {
    if (var28 <= 0) return 1;
    return func873(var28 - 1);
}


int main() {
    for (int var458 = 0; var458 < 13; var458++) {
        var458 += 1;
    }

    int var159 = 46;
    if (var159 % 2 == 0) {
        printf("var159 is even\n");
    } else {
        printf("var159 is odd\n");
    }

    return 0;
}
