
#include <stdio.h>


int func44(int var766) {
    if (var766 <= 0) return 1;
    return func44(var766 - 1);
}


int main() {
    for (int var300 = 0; var300 < 8; var300++) {
        var300 += 2;
    }

    int var858 = 80;
    if (var858 % 2 == 0) {
        printf("var858 is even\n");
    } else {
        printf("var858 is odd\n");
    }

    return 0;
}
