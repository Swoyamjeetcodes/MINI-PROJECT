
#include <stdio.h>


int func946(int var921) {
    if (var921 <= 0) return 1;
    return func946(var921 - 1);
}


int main() {
    int var900 = 0;
    while (var900 < 5) {
        var900 += 1;
        var900++;
    }

    int var288 = 99;
    if (var288 % 2 == 0) {
        printf("var288 is even\n");
    } else {
        printf("var288 is odd\n");
    }

    return 0;
}
