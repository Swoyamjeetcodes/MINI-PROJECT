
#include <stdio.h>


int func123(int var924) {
    if (var924 <= 0) return 1;
    return func123(var924 - 1);
}


int main() {
    int var386 = 0;
    while (var386 < 12) {
        var386 += 5;
        var386++;
    }

    int var234 = 26;
    if (var234 % 2 == 0) {
        printf("var234 is even\n");
    } else {
        printf("var234 is odd\n");
    }

    return 0;
}
