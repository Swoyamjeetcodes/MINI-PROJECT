
#include <stdio.h>


int func285(int var211) {
    if (var211 <= 0) return 1;
    return func285(var211 - 1);
}


int main() {
    for (int var295 = 0; var295 < 17; var295++) {
        var295 += 3;
    }

    int var709 = 59;
    if (var709 % 2 == 0) {
        printf("var709 is even\n");
    } else {
        printf("var709 is odd\n");
    }

    return 0;
}
