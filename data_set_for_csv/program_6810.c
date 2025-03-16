
#include <stdio.h>


int func830(int var887) {
    if (var887 <= 0) return 1;
    return func830(var887 - 1);
}


int main() {
    int var84 = 0;
    while (var84 < 11) {
        var84 += 5;
        var84++;
    }

    int var682 = 55;
    if (var682 % 2 == 0) {
        printf("var682 is even\n");
    } else {
        printf("var682 is odd\n");
    }

    return 0;
}
