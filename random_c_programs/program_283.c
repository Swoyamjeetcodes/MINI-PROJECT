
#include <stdio.h>


int func587(int var790) {
    if (var790 <= 0) return 1;
    return func587(var790 - 1);
}


int main() {
    int var762 = 0;
    while (var762 < 13) {
        var762 += 5;
        var762++;
    }

    int var376 = 48;
    if (var376 % 2 == 0) {
        printf("var376 is even\n");
    } else {
        printf("var376 is odd\n");
    }

    return 0;
}
