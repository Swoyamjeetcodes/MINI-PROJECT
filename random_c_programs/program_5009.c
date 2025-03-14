
#include <stdio.h>


int func104(int var520) {
    if (var520 <= 0) return 1;
    return func104(var520 - 1);
}


int main() {
    for (int var288 = 0; var288 < 8; var288++) {
        var288 += 5;
    }

    int var241 = 16;
    if (var241 % 2 == 0) {
        printf("var241 is even\n");
    } else {
        printf("var241 is odd\n");
    }

    return 0;
}
