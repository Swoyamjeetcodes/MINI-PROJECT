
#include <stdio.h>


int func635(int var941) {
    if (var941 <= 0) return 1;
    return func635(var941 - 1);
}


int main() {
    int var603 = 0;
    while (var603 < 9) {
        var603 += 3;
        var603++;
    }

    int var142 = 30;
    if (var142 % 2 == 0) {
        printf("var142 is even\n");
    } else {
        printf("var142 is odd\n");
    }

    return 0;
}
