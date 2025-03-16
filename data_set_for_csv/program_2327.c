
#include <stdio.h>


int func729(int var503) {
    if (var503 <= 0) return 1;
    return func729(var503 - 1);
}


int main() {
    int var91 = 0;
    while (var91 < 19) {
        var91 += 5;
        var91++;
    }

    int var666 = 18;
    if (var666 % 2 == 0) {
        printf("var666 is even\n");
    } else {
        printf("var666 is odd\n");
    }

    return 0;
}
