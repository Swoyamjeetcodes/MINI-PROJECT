
#include <stdio.h>


int func492(int var982) {
    if (var982 <= 0) return 1;
    return func492(var982 - 1);
}


int main() {
    for (int var935 = 0; var935 < 20; var935++) {
        var935 += 4;
    }

    int var525 = 74;
    if (var525 % 2 == 0) {
        printf("var525 is even\n");
    } else {
        printf("var525 is odd\n");
    }

    return 0;
}
