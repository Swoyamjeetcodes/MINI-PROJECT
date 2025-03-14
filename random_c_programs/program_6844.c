
#include <stdio.h>


int func126(int var338) {
    if (var338 <= 0) return 1;
    return func126(var338 - 1);
}


int main() {
    int var813 = 0;
    while (var813 < 12) {
        var813 += 5;
        var813++;
    }

    int var925 = 97;
    if (var925 % 2 == 0) {
        printf("var925 is even\n");
    } else {
        printf("var925 is odd\n");
    }

    return 0;
}
