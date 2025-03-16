
#include <stdio.h>


int func35(int var372) {
    if (var372 <= 0) return 1;
    return func35(var372 - 1);
}


int main() {
    for (int var885 = 0; var885 < 6; var885++) {
        var885 += 1;
    }

    int var232 = 49;
    if (var232 % 2 == 0) {
        printf("var232 is even\n");
    } else {
        printf("var232 is odd\n");
    }

    return 0;
}
