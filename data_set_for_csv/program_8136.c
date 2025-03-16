
#include <stdio.h>


int func886(int var608) {
    if (var608 <= 0) return 1;
    return func886(var608 - 1);
}


int main() {
    int var753 = 0;
    while (var753 < 5) {
        var753 += 1;
        var753++;
    }

    int var369 = 52;
    if (var369 % 2 == 0) {
        printf("var369 is even\n");
    } else {
        printf("var369 is odd\n");
    }

    return 0;
}
