
#include <stdio.h>


int func990(int var171) {
    if (var171 <= 0) return 1;
    return func990(var171 - 1);
}


int main() {
    int var326 = 0;
    while (var326 < 5) {
        var326 += 4;
        var326++;
    }

    int var254 = 3;
    if (var254 % 2 == 0) {
        printf("var254 is even\n");
    } else {
        printf("var254 is odd\n");
    }

    return 0;
}
