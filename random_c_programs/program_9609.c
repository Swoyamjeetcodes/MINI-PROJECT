
#include <stdio.h>


int func126(int var747) {
    if (var747 <= 0) return 1;
    return func126(var747 - 1);
}


int main() {
    int var83 = 0;
    while (var83 < 5) {
        var83 += 2;
        var83++;
    }

    int var745 = 20;
    if (var745 % 2 == 0) {
        printf("var745 is even\n");
    } else {
        printf("var745 is odd\n");
    }

    return 0;
}
