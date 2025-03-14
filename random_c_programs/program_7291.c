
#include <stdio.h>


int func121(int var678) {
    if (var678 <= 0) return 1;
    return func121(var678 - 1);
}


int main() {
    for (int var941 = 0; var941 < 8; var941++) {
        var941 += 3;
    }

    int var115 = 86;
    if (var115 % 2 == 0) {
        printf("var115 is even\n");
    } else {
        printf("var115 is odd\n");
    }

    return 0;
}
