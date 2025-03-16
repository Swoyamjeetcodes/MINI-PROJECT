
#include <stdio.h>


int func775(int var738) {
    if (var738 <= 0) return 1;
    return func775(var738 - 1);
}


int main() {
    int var185 = 0;
    while (var185 < 20) {
        var185 += 5;
        var185++;
    }

    int var642 = 61;
    if (var642 % 2 == 0) {
        printf("var642 is even\n");
    } else {
        printf("var642 is odd\n");
    }

    return 0;
}
