
#include <stdio.h>


int func299(int var765) {
    if (var765 <= 0) return 1;
    return func299(var765 - 1);
}


int main() {
    int var924 = 0;
    while (var924 < 20) {
        var924 += 5;
        var924++;
    }

    int var887 = 54;
    if (var887 % 2 == 0) {
        printf("var887 is even\n");
    } else {
        printf("var887 is odd\n");
    }

    return 0;
}
