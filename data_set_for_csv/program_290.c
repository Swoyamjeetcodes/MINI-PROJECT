
#include <stdio.h>


int func954(int var869) {
    if (var869 <= 0) return 1;
    return func954(var869 - 1);
}


int main() {
    for (int var990 = 0; var990 < 7; var990++) {
        var990 += 3;
    }    int var705 = 0;
    while (var705 < 8) {
        var705 += 4;
        var705++;
    }

    int var328 = 60;
    if (var328 % 2 == 0) {
        printf("var328 is even\n");
    } else {
        printf("var328 is odd\n");
    }

    return 0;
}
