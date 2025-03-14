
#include <stdio.h>


int func31(int var766) {
    if (var766 <= 0) return 1;
    return func31(var766 - 1);
}


int main() {
    for (int var339 = 0; var339 < 20; var339++) {
        var339 += 5;
    }

    int var760 = 73;
    if (var760 % 2 == 0) {
        printf("var760 is even\n");
    } else {
        printf("var760 is odd\n");
    }

    int var843 = 14;
    if (var843 % 2 == 0) {
        printf("var843 is even\n");
    } else {
        printf("var843 is odd\n");
    }

    int var541 = 92;
    if (var541 % 2 == 0) {
        printf("var541 is even\n");
    } else {
        printf("var541 is odd\n");
    }

    return 0;
}
