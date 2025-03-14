
#include <stdio.h>


int func19(int var669) {
    if (var669 <= 0) return 1;
    return func19(var669 - 1);
}


int main() {
    for (int var37 = 0; var37 < 19; var37++) {
        var37 += 1;
    }    int var159 = 0;
    while (var159 < 9) {
        var159 += 2;
        var159++;
    }

    int var679 = 79;
    if (var679 % 2 == 0) {
        printf("var679 is even\n");
    } else {
        printf("var679 is odd\n");
    }

    int var522 = 90;
    if (var522 % 2 == 0) {
        printf("var522 is even\n");
    } else {
        printf("var522 is odd\n");
    }

    return 0;
}
