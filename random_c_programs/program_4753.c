
#include <stdio.h>


int func593(int var517) {
    if (var517 <= 0) return 1;
    return func593(var517 - 1);
}


int main() {
    int var937 = 0;
    while (var937 < 19) {
        var937 += 4;
        var937++;
    }

    int var176 = 52;
    if (var176 % 2 == 0) {
        printf("var176 is even\n");
    } else {
        printf("var176 is odd\n");
    }

    return 0;
}
