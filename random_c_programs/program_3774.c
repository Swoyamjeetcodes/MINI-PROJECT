
#include <stdio.h>


int func344(int var692) {
    if (var692 <= 0) return 1;
    return func344(var692 - 1);
}


int main() {
    int var376 = 0;
    while (var376 < 14) {
        var376 += 3;
        var376++;
    }

    int var843 = 83;
    if (var843 % 2 == 0) {
        printf("var843 is even\n");
    } else {
        printf("var843 is odd\n");
    }

    return 0;
}
