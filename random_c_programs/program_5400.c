
#include <stdio.h>


int func735(int var431) {
    if (var431 <= 0) return 1;
    return func735(var431 - 1);
}


int main() {
    for (int var251 = 0; var251 < 14; var251++) {
        var251 += 1;
    }

    int var275 = 25;
    if (var275 % 2 == 0) {
        printf("var275 is even\n");
    } else {
        printf("var275 is odd\n");
    }

    return 0;
}
