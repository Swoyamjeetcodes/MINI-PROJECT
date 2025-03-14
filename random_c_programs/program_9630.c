
#include <stdio.h>


int func719(int var53) {
    if (var53 <= 0) return 1;
    return func719(var53 - 1);
}


int main() {
    int var247 = 0;
    while (var247 < 6) {
        var247 += 2;
        var247++;
    }

    int var68 = 47;
    if (var68 % 2 == 0) {
        printf("var68 is even\n");
    } else {
        printf("var68 is odd\n");
    }

    return 0;
}
