
#include <stdio.h>


int func701(int var977) {
    if (var977 <= 0) return 1;
    return func701(var977 - 1);
}


int main() {
    int var829 = 0;
    while (var829 < 10) {
        var829 += 3;
        var829++;
    }

    int var614 = 27;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    return 0;
}
