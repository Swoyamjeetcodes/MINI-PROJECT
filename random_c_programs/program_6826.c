
#include <stdio.h>


int func997(int var865) {
    if (var865 <= 0) return 1;
    return func997(var865 - 1);
}


int main() {
    int var309 = 0;
    while (var309 < 5) {
        var309 += 1;
        var309++;
    }

    int var579 = 65;
    if (var579 % 2 == 0) {
        printf("var579 is even\n");
    } else {
        printf("var579 is odd\n");
    }

    return 0;
}
