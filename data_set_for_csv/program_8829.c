
#include <stdio.h>


int func150(int var603) {
    if (var603 <= 0) return 1;
    return func150(var603 - 1);
}


int main() {
    int var198 = 0;
    while (var198 < 20) {
        var198 += 3;
        var198++;
    }

    int var540 = 2;
    if (var540 % 2 == 0) {
        printf("var540 is even\n");
    } else {
        printf("var540 is odd\n");
    }

    return 0;
}
