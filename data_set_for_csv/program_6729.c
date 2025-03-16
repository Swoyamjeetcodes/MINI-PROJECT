
#include <stdio.h>


int func511(int var782) {
    if (var782 <= 0) return 1;
    return func511(var782 - 1);
}


int main() {
    int var788 = 0;
    while (var788 < 10) {
        var788 += 1;
        var788++;
    }

    int var57 = 45;
    if (var57 % 2 == 0) {
        printf("var57 is even\n");
    } else {
        printf("var57 is odd\n");
    }

    return 0;
}
