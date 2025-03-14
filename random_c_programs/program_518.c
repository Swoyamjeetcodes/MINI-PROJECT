
#include <stdio.h>


int func301(int var755) {
    if (var755 <= 0) return 1;
    return func301(var755 - 1);
}


int main() {
    for (int var517 = 0; var517 < 12; var517++) {
        var517 += 4;
    }

    int var896 = 57;
    if (var896 % 2 == 0) {
        printf("var896 is even\n");
    } else {
        printf("var896 is odd\n");
    }

    return 0;
}
