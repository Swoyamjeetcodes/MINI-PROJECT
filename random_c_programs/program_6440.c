
#include <stdio.h>


int func695(int var272) {
    if (var272 <= 0) return 1;
    return func695(var272 - 1);
}


int main() {
    int var689 = 0;
    while (var689 < 10) {
        var689 += 3;
        var689++;
    }

    int var847 = 26;
    if (var847 % 2 == 0) {
        printf("var847 is even\n");
    } else {
        printf("var847 is odd\n");
    }

    return 0;
}
