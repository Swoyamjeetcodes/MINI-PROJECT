
#include <stdio.h>


int func968(int var207) {
    if (var207 <= 0) return 1;
    return func968(var207 - 1);
}


int main() {
    for (int var713 = 0; var713 < 16; var713++) {
        var713 += 1;
    }

    int var14 = 27;
    if (var14 % 2 == 0) {
        printf("var14 is even\n");
    } else {
        printf("var14 is odd\n");
    }

    return 0;
}
