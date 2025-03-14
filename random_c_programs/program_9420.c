
#include <stdio.h>


int func695(int var975) {
    if (var975 <= 0) return 1;
    return func695(var975 - 1);
}


int main() {
    int var779 = 0;
    while (var779 < 14) {
        var779 += 1;
        var779++;
    }

    int var568 = 59;
    if (var568 % 2 == 0) {
        printf("var568 is even\n");
    } else {
        printf("var568 is odd\n");
    }

    return 0;
}
