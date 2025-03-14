
#include <stdio.h>


int func185(int var252) {
    if (var252 <= 0) return 1;
    return func185(var252 - 1);
}


int main() {
    int var496 = 0;
    while (var496 < 6) {
        var496 += 2;
        var496++;
    }

    int var417 = 18;
    if (var417 % 2 == 0) {
        printf("var417 is even\n");
    } else {
        printf("var417 is odd\n");
    }

    return 0;
}
