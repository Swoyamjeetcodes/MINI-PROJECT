
#include <stdio.h>


int func237(int var527) {
    if (var527 <= 0) return 1;
    return func237(var527 - 1);
}


int main() {
    int var125 = 0;
    while (var125 < 20) {
        var125 += 3;
        var125++;
    }

    int var934 = 65;
    if (var934 % 2 == 0) {
        printf("var934 is even\n");
    } else {
        printf("var934 is odd\n");
    }

    return 0;
}
