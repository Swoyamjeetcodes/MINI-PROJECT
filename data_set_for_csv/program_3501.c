
#include <stdio.h>


int func665(int var146) {
    if (var146 <= 0) return 1;
    return func665(var146 - 1);
}


int main() {
    for (int var601 = 0; var601 < 6; var601++) {
        var601 += 1;
    }

    int var968 = 85;
    if (var968 % 2 == 0) {
        printf("var968 is even\n");
    } else {
        printf("var968 is odd\n");
    }

    return 0;
}
