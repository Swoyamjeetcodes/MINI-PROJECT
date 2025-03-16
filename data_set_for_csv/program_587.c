
#include <stdio.h>


int func50(int var247) {
    if (var247 <= 0) return 1;
    return func50(var247 - 1);
}


int main() {
    for (int var398 = 0; var398 < 5; var398++) {
        var398 += 2;
    }

    int var580 = 82;
    if (var580 % 2 == 0) {
        printf("var580 is even\n");
    } else {
        printf("var580 is odd\n");
    }

    return 0;
}
