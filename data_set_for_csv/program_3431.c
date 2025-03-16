
#include <stdio.h>


int func614(int var382) {
    if (var382 <= 0) return 1;
    return func614(var382 - 1);
}


int main() {
    int var329 = 0;
    while (var329 < 18) {
        var329 += 5;
        var329++;
    }

    int var980 = 66;
    if (var980 % 2 == 0) {
        printf("var980 is even\n");
    } else {
        printf("var980 is odd\n");
    }

    return 0;
}
