
#include <stdio.h>


int func692(int var882) {
    if (var882 <= 0) return 1;
    return func692(var882 - 1);
}


int main() {
    int var174 = 0;
    while (var174 < 19) {
        var174 += 1;
        var174++;
    }

    int var362 = 99;
    if (var362 % 2 == 0) {
        printf("var362 is even\n");
    } else {
        printf("var362 is odd\n");
    }

    return 0;
}
