
#include <stdio.h>


int func82(int var98) {
    if (var98 <= 0) return 1;
    return func82(var98 - 1);
}


int main() {
    int var321 = 0;
    while (var321 < 6) {
        var321 += 4;
        var321++;
    }    int var197 = 0;
    while (var197 < 12) {
        var197 += 5;
        var197++;
    }

    int var175 = 67;
    if (var175 % 2 == 0) {
        printf("var175 is even\n");
    } else {
        printf("var175 is odd\n");
    }

    return 0;
}
