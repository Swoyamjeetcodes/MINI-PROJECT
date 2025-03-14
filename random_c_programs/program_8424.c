
#include <stdio.h>


int func593(int var679) {
    if (var679 <= 0) return 1;
    return func593(var679 - 1);
}


int main() {
    int var386 = 0;
    while (var386 < 16) {
        var386 += 5;
        var386++;
    }

    int var195 = 48;
    if (var195 % 2 == 0) {
        printf("var195 is even\n");
    } else {
        printf("var195 is odd\n");
    }

    return 0;
}
