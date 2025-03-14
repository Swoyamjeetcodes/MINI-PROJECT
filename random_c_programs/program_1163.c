
#include <stdio.h>


int func256(int var716) {
    if (var716 <= 0) return 1;
    return func256(var716 - 1);
}


int main() {
    for (int var646 = 0; var646 < 5; var646++) {
        var646 += 3;
    }

    int var127 = 27;
    if (var127 % 2 == 0) {
        printf("var127 is even\n");
    } else {
        printf("var127 is odd\n");
    }

    return 0;
}
