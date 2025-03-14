
#include <stdio.h>


int func475(int var134) {
    if (var134 <= 0) return 1;
    return func475(var134 - 1);
}


int main() {
    int var725 = 0;
    while (var725 < 12) {
        var725 += 1;
        var725++;
    }

    int var352 = 25;
    if (var352 % 2 == 0) {
        printf("var352 is even\n");
    } else {
        printf("var352 is odd\n");
    }

    return 0;
}
