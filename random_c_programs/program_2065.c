
#include <stdio.h>


int func542(int var926) {
    if (var926 <= 0) return 1;
    return func542(var926 - 1);
}


int main() {
    int var440 = 0;
    while (var440 < 16) {
        var440 += 4;
        var440++;
    }

    int var792 = 46;
    if (var792 % 2 == 0) {
        printf("var792 is even\n");
    } else {
        printf("var792 is odd\n");
    }

    return 0;
}
