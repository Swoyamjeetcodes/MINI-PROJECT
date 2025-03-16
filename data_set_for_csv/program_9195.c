
#include <stdio.h>


int func528(int var592) {
    if (var592 <= 0) return 1;
    return func528(var592 - 1);
}


int main() {
    int var33 = 0;
    while (var33 < 13) {
        var33 += 2;
        var33++;
    }

    int var561 = 78;
    if (var561 % 2 == 0) {
        printf("var561 is even\n");
    } else {
        printf("var561 is odd\n");
    }

    return 0;
}
