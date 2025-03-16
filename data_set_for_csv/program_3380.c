
#include <stdio.h>


int func421(int var736) {
    if (var736 <= 0) return 1;
    return func421(var736 - 1);
}


int main() {
    for (int var55 = 0; var55 < 8; var55++) {
        var55 += 1;
    }

    int var747 = 17;
    if (var747 % 2 == 0) {
        printf("var747 is even\n");
    } else {
        printf("var747 is odd\n");
    }

    return 0;
}
