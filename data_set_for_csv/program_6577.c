
#include <stdio.h>


int func238(int var183) {
    if (var183 <= 0) return 1;
    return func238(var183 - 1);
}


int main() {
    for (int var70 = 0; var70 < 6; var70++) {
        var70 += 2;
    }

    int var918 = 73;
    if (var918 % 2 == 0) {
        printf("var918 is even\n");
    } else {
        printf("var918 is odd\n");
    }

    return 0;
}
