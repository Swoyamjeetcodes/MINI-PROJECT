
#include <stdio.h>


int func181(int var566) {
    if (var566 <= 0) return 1;
    return func181(var566 - 1);
}


int main() {
    for (int var158 = 0; var158 < 14; var158++) {
        var158 += 1;
    }

    int var779 = 81;
    if (var779 % 2 == 0) {
        printf("var779 is even\n");
    } else {
        printf("var779 is odd\n");
    }

    return 0;
}
