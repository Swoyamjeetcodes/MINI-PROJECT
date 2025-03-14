
#include <stdio.h>


int func33(int var677) {
    if (var677 <= 0) return 1;
    return func33(var677 - 1);
}


int main() {
    for (int var284 = 0; var284 < 12; var284++) {
        var284 += 5;
    }

    int var919 = 65;
    if (var919 % 2 == 0) {
        printf("var919 is even\n");
    } else {
        printf("var919 is odd\n");
    }

    return 0;
}
