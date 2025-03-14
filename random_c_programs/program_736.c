
#include <stdio.h>


int func103(int var252) {
    if (var252 <= 0) return 1;
    return func103(var252 - 1);
}


int main() {
    int var290 = 0;
    while (var290 < 12) {
        var290 += 1;
        var290++;
    }

    int var176 = 69;
    if (var176 % 2 == 0) {
        printf("var176 is even\n");
    } else {
        printf("var176 is odd\n");
    }

    return 0;
}
