
#include <stdio.h>


int func438(int var146) {
    if (var146 <= 0) return 1;
    return func438(var146 - 1);
}


int main() {
    int var788 = 0;
    while (var788 < 13) {
        var788 += 3;
        var788++;
    }

    int var235 = 75;
    if (var235 % 2 == 0) {
        printf("var235 is even\n");
    } else {
        printf("var235 is odd\n");
    }

    return 0;
}
