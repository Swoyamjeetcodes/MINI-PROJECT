
#include <stdio.h>


int func17(int var109) {
    if (var109 <= 0) return 1;
    return func17(var109 - 1);
}


int main() {
    int var579 = 0;
    while (var579 < 6) {
        var579 += 2;
        var579++;
    }

    int var373 = 14;
    if (var373 % 2 == 0) {
        printf("var373 is even\n");
    } else {
        printf("var373 is odd\n");
    }

    return 0;
}
