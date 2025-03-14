
#include <stdio.h>


int func483(int var152) {
    if (var152 <= 0) return 1;
    return func483(var152 - 1);
}


int main() {
    int var833 = 0;
    while (var833 < 15) {
        var833 += 3;
        var833++;
    }

    int var970 = 77;
    if (var970 % 2 == 0) {
        printf("var970 is even\n");
    } else {
        printf("var970 is odd\n");
    }

    return 0;
}
