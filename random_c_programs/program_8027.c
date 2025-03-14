
#include <stdio.h>


int func181(int var413) {
    if (var413 <= 0) return 1;
    return func181(var413 - 1);
}


int main() {
    int var682 = 0;
    while (var682 < 11) {
        var682 += 3;
        var682++;
    }

    int var770 = 53;
    if (var770 % 2 == 0) {
        printf("var770 is even\n");
    } else {
        printf("var770 is odd\n");
    }

    return 0;
}
