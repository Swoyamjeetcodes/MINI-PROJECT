
#include <stdio.h>


int func985(int var625) {
    if (var625 <= 0) return 1;
    return func985(var625 - 1);
}


int main() {
    for (int var88 = 0; var88 < 15; var88++) {
        var88 += 5;
    }

    int var622 = 3;
    if (var622 % 2 == 0) {
        printf("var622 is even\n");
    } else {
        printf("var622 is odd\n");
    }

    return 0;
}
