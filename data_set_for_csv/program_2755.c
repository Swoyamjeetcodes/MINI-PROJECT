
#include <stdio.h>


int func526(int var741) {
    if (var741 <= 0) return 1;
    return func526(var741 - 1);
}


int main() {
    int var412 = 0;
    while (var412 < 8) {
        var412 += 3;
        var412++;
    }

    int var517 = 49;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    return 0;
}
