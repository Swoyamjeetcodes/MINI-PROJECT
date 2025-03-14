
#include <stdio.h>


int func726(int var142) {
    if (var142 <= 0) return 1;
    return func726(var142 - 1);
}


int main() {
    int var153 = 0;
    while (var153 < 15) {
        var153 += 1;
        var153++;
    }

    int var797 = 62;
    if (var797 % 2 == 0) {
        printf("var797 is even\n");
    } else {
        printf("var797 is odd\n");
    }

    return 0;
}
