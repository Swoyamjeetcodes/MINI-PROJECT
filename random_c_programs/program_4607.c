
#include <stdio.h>


int func279(int var179) {
    if (var179 <= 0) return 1;
    return func279(var179 - 1);
}


int main() {
    int var647 = 0;
    while (var647 < 11) {
        var647 += 4;
        var647++;
    }

    int var959 = 40;
    if (var959 % 2 == 0) {
        printf("var959 is even\n");
    } else {
        printf("var959 is odd\n");
    }

    return 0;
}
