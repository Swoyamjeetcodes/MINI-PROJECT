
#include <stdio.h>


int func654(int var260) {
    if (var260 <= 0) return 1;
    return func654(var260 - 1);
}


int main() {
    int var778 = 0;
    while (var778 < 15) {
        var778 += 3;
        var778++;
    }

    int var437 = 38;
    if (var437 % 2 == 0) {
        printf("var437 is even\n");
    } else {
        printf("var437 is odd\n");
    }

    return 0;
}
