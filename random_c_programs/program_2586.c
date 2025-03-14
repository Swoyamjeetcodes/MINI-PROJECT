
#include <stdio.h>


int func749(int var189) {
    if (var189 <= 0) return 1;
    return func749(var189 - 1);
}

int func357(int var86) {
    if (var86 <= 0) return 1;
    return func357(var86 - 1);
}

int func83(int var774) {
    if (var774 <= 0) return 1;
    return func83(var774 - 1);
}

int func629(int var44) {
    if (var44 <= 0) return 1;
    return 47;
}

int func437(int var599) {
    if (var599 <= 0) return 1;
    return func437(var599 - 1);
}


int main() {
    int var223 = 0;
    while (var223 < 20) {
        var223 += 3;
        var223++;
    }    int var793 = 0;
    while (var793 < 19) {
        var793 += 5;
        var793++;
    }

    int var154 = 12;
    if (var154 % 2 == 0) {
        printf("var154 is even\n");
    } else {
        printf("var154 is odd\n");
    }

    return 0;
}
