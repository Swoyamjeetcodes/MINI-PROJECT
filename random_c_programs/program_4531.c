
#include <stdio.h>


int func126(int var592) {
    if (var592 <= 0) return 1;
    return func126(var592 - 1);
}


int main() {
    for (int var737 = 0; var737 < 16; var737++) {
        var737 += 5;
    }

    int var977 = 61;
    if (var977 % 2 == 0) {
        printf("var977 is even\n");
    } else {
        printf("var977 is odd\n");
    }

    return 0;
}
