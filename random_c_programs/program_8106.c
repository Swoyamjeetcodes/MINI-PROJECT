
#include <stdio.h>


int func329(int var366) {
    if (var366 <= 0) return 1;
    return func329(var366 - 1);
}


int main() {
    int var150 = 0;
    while (var150 < 8) {
        var150 += 2;
        var150++;
    }

    int var239 = 51;
    if (var239 % 2 == 0) {
        printf("var239 is even\n");
    } else {
        printf("var239 is odd\n");
    }

    return 0;
}
