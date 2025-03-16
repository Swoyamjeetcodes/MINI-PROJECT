
#include <stdio.h>


int func48(int var46) {
    if (var46 <= 0) return 1;
    return func48(var46 - 1);
}


int main() {
    for (int var244 = 0; var244 < 17; var244++) {
        var244 += 5;
    }

    int var753 = 11;
    if (var753 % 2 == 0) {
        printf("var753 is even\n");
    } else {
        printf("var753 is odd\n");
    }

    return 0;
}
