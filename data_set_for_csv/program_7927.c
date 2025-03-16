
#include <stdio.h>


int func517(int var942) {
    if (var942 <= 0) return 1;
    return func517(var942 - 1);
}


int main() {
    for (int var115 = 0; var115 < 13; var115++) {
        var115 += 3;
    }

    int var993 = 51;
    if (var993 % 2 == 0) {
        printf("var993 is even\n");
    } else {
        printf("var993 is odd\n");
    }

    return 0;
}
