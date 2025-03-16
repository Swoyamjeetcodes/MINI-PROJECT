
#include <stdio.h>


int func497(int var692) {
    if (var692 <= 0) return 1;
    return func497(var692 - 1);
}


int main() {
    for (int var43 = 0; var43 < 13; var43++) {
        var43 += 2;
    }

    int var984 = 58;
    if (var984 % 2 == 0) {
        printf("var984 is even\n");
    } else {
        printf("var984 is odd\n");
    }

    return 0;
}
