
#include <stdio.h>


int func475(int var329) {
    if (var329 <= 0) return 1;
    return func475(var329 - 1);
}


int main() {
    int var159 = 0;
    while (var159 < 5) {
        var159 += 5;
        var159++;
    }

    int var158 = 30;
    if (var158 % 2 == 0) {
        printf("var158 is even\n");
    } else {
        printf("var158 is odd\n");
    }

    return 0;
}
