
#include <stdio.h>


int func963(int var155) {
    if (var155 <= 0) return 1;
    return func963(var155 - 1);
}


int main() {
    int var753 = 0;
    while (var753 < 14) {
        var753 += 1;
        var753++;
    }

    int var628 = 60;
    if (var628 % 2 == 0) {
        printf("var628 is even\n");
    } else {
        printf("var628 is odd\n");
    }

    return 0;
}
