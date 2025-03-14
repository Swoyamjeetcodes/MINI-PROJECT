
#include <stdio.h>


int func889(int var211) {
    if (var211 <= 0) return 1;
    return func889(var211 - 1);
}


int main() {
    for (int var121 = 0; var121 < 18; var121++) {
        var121 += 1;
    }

    int var187 = 8;
    if (var187 % 2 == 0) {
        printf("var187 is even\n");
    } else {
        printf("var187 is odd\n");
    }

    return 0;
}
