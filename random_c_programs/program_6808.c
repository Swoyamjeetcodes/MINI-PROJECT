
#include <stdio.h>


int func225(int var879) {
    if (var879 <= 0) return 1;
    return func225(var879 - 1);
}


int main() {
    int var476 = 0;
    while (var476 < 18) {
        var476 += 5;
        var476++;
    }

    int var195 = 67;
    if (var195 % 2 == 0) {
        printf("var195 is even\n");
    } else {
        printf("var195 is odd\n");
    }

    return 0;
}
