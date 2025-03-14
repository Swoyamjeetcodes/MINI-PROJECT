
#include <stdio.h>


int func393(int var651) {
    if (var651 <= 0) return 1;
    return func393(var651 - 1);
}


int main() {
    int var519 = 0;
    while (var519 < 15) {
        var519 += 3;
        var519++;
    }

    int var995 = 52;
    if (var995 % 2 == 0) {
        printf("var995 is even\n");
    } else {
        printf("var995 is odd\n");
    }

    return 0;
}
