
#include <stdio.h>


int func422(int var448) {
    if (var448 <= 0) return 1;
    return func422(var448 - 1);
}


int main() {
    for (int var608 = 0; var608 < 18; var608++) {
        var608 += 3;
    }

    int var657 = 36;
    if (var657 % 2 == 0) {
        printf("var657 is even\n");
    } else {
        printf("var657 is odd\n");
    }

    return 0;
}
