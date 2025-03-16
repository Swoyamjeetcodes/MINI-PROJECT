
#include <stdio.h>


int func942(int var955) {
    if (var955 <= 0) return 1;
    return func942(var955 - 1);
}


int main() {
    for (int var492 = 0; var492 < 19; var492++) {
        var492 += 5;
    }

    int var733 = 23;
    if (var733 % 2 == 0) {
        printf("var733 is even\n");
    } else {
        printf("var733 is odd\n");
    }

    return 0;
}
