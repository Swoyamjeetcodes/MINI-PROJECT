
#include <stdio.h>


int func75(int var602) {
    if (var602 <= 0) return 1;
    return func75(var602 - 1);
}


int main() {
    for (int var713 = 0; var713 < 8; var713++) {
        var713 += 4;
    }

    int var183 = 25;
    if (var183 % 2 == 0) {
        printf("var183 is even\n");
    } else {
        printf("var183 is odd\n");
    }

    return 0;
}
