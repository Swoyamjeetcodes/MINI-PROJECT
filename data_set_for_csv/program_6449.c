
#include <stdio.h>


int func853(int var546) {
    if (var546 <= 0) return 1;
    return func853(var546 - 1);
}


int main() {
    for (int var502 = 0; var502 < 14; var502++) {
        var502 += 4;
    }

    int var890 = 4;
    if (var890 % 2 == 0) {
        printf("var890 is even\n");
    } else {
        printf("var890 is odd\n");
    }

    return 0;
}
