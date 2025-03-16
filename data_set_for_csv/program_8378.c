
#include <stdio.h>


int func321(int var290) {
    if (var290 <= 0) return 1;
    return func321(var290 - 1);
}


int main() {
    int var108 = 0;
    while (var108 < 13) {
        var108 += 1;
        var108++;
    }

    int var142 = 11;
    if (var142 % 2 == 0) {
        printf("var142 is even\n");
    } else {
        printf("var142 is odd\n");
    }

    return 0;
}
