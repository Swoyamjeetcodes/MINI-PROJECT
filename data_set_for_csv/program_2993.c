
#include <stdio.h>


int func286(int var210) {
    if (var210 <= 0) return 1;
    return func286(var210 - 1);
}


int main() {
    int var725 = 0;
    while (var725 < 20) {
        var725 += 4;
        var725++;
    }

    int var700 = 27;
    if (var700 % 2 == 0) {
        printf("var700 is even\n");
    } else {
        printf("var700 is odd\n");
    }

    return 0;
}
