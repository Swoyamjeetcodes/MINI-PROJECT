
#include <stdio.h>


int func163(int var994) {
    if (var994 <= 0) return 1;
    return func163(var994 - 1);
}


int main() {
    int var33 = 0;
    while (var33 < 5) {
        var33 += 5;
        var33++;
    }

    int var542 = 46;
    if (var542 % 2 == 0) {
        printf("var542 is even\n");
    } else {
        printf("var542 is odd\n");
    }

    return 0;
}
