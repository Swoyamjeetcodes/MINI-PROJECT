
#include <stdio.h>


int func901(int var7) {
    if (var7 <= 0) return 1;
    return func901(var7 - 1);
}


int main() {
    for (int var934 = 0; var934 < 17; var934++) {
        var934 += 4;
    }

    int var944 = 1;
    if (var944 % 2 == 0) {
        printf("var944 is even\n");
    } else {
        printf("var944 is odd\n");
    }

    return 0;
}
