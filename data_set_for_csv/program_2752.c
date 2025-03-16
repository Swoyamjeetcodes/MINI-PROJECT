
#include <stdio.h>


int func883(int var308) {
    if (var308 <= 0) return 1;
    return func883(var308 - 1);
}


int main() {
    int var267 = 0;
    while (var267 < 15) {
        var267 += 3;
        var267++;
    }

    int var981 = 83;
    if (var981 % 2 == 0) {
        printf("var981 is even\n");
    } else {
        printf("var981 is odd\n");
    }

    return 0;
}
