
#include <stdio.h>


int func835(int var78) {
    if (var78 <= 0) return 1;
    return func835(var78 - 1);
}


int main() {
    for (int var889 = 0; var889 < 7; var889++) {
        var889 += 4;
    }

    int var248 = 44;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    return 0;
}
