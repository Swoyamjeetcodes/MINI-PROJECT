
#include <stdio.h>


int func719(int var925) {
    if (var925 <= 0) return 1;
    return func719(var925 - 1);
}


int main() {
    int var788 = 0;
    while (var788 < 18) {
        var788 += 5;
        var788++;
    }

    int var636 = 90;
    if (var636 % 2 == 0) {
        printf("var636 is even\n");
    } else {
        printf("var636 is odd\n");
    }

    return 0;
}
