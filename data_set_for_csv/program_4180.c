
#include <stdio.h>


int func274(int var774) {
    if (var774 <= 0) return 1;
    return func274(var774 - 1);
}


int main() {
    int var507 = 0;
    while (var507 < 13) {
        var507 += 5;
        var507++;
    }

    int var181 = 56;
    if (var181 % 2 == 0) {
        printf("var181 is even\n");
    } else {
        printf("var181 is odd\n");
    }

    return 0;
}
