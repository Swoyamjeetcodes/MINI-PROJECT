
#include <stdio.h>


int func155(int var857) {
    if (var857 <= 0) return 1;
    return func155(var857 - 1);
}


int main() {
    for (int var684 = 0; var684 < 16; var684++) {
        var684 += 2;
    }

    int var924 = 92;
    if (var924 % 2 == 0) {
        printf("var924 is even\n");
    } else {
        printf("var924 is odd\n");
    }

    return 0;
}
