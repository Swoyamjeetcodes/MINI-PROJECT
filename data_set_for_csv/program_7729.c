
#include <stdio.h>


int func26(int var354) {
    if (var354 <= 0) return 1;
    return func26(var354 - 1);
}


int main() {
    for (int var196 = 0; var196 < 9; var196++) {
        var196 += 3;
    }

    int var855 = 49;
    if (var855 % 2 == 0) {
        printf("var855 is even\n");
    } else {
        printf("var855 is odd\n");
    }

    return 0;
}
