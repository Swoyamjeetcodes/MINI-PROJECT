
#include <stdio.h>


int func104(int var806) {
    if (var806 <= 0) return 1;
    return func104(var806 - 1);
}


int main() {
    int var625 = 0;
    while (var625 < 16) {
        var625 += 2;
        var625++;
    }

    int var687 = 56;
    if (var687 % 2 == 0) {
        printf("var687 is even\n");
    } else {
        printf("var687 is odd\n");
    }

    return 0;
}
