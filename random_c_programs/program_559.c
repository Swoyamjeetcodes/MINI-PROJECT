
#include <stdio.h>


int func160(int var901) {
    if (var901 <= 0) return 1;
    return func160(var901 - 1);
}


int main() {
    for (int var178 = 0; var178 < 14; var178++) {
        var178 += 3;
    }

    int var541 = 31;
    if (var541 % 2 == 0) {
        printf("var541 is even\n");
    } else {
        printf("var541 is odd\n");
    }

    int var492 = 21;
    if (var492 % 2 == 0) {
        printf("var492 is even\n");
    } else {
        printf("var492 is odd\n");
    }

    return 0;
}
