
#include <stdio.h>


int func62(int var156) {
    if (var156 <= 0) return 1;
    return func62(var156 - 1);
}


int main() {
    for (int var144 = 0; var144 < 17; var144++) {
        var144 += 5;
    }

    int var582 = 84;
    if (var582 % 2 == 0) {
        printf("var582 is even\n");
    } else {
        printf("var582 is odd\n");
    }

    return 0;
}
