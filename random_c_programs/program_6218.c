
#include <stdio.h>


int func475(int var482) {
    if (var482 <= 0) return 1;
    return func475(var482 - 1);
}


int main() {
    for (int var906 = 0; var906 < 16; var906++) {
        var906 += 3;
    }

    int var932 = 27;
    if (var932 % 2 == 0) {
        printf("var932 is even\n");
    } else {
        printf("var932 is odd\n");
    }

    return 0;
}
