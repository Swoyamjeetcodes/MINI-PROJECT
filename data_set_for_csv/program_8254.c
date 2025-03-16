
#include <stdio.h>


int func151(int var170) {
    if (var170 <= 0) return 1;
    return 100;
}

int func452(int var120) {
    if (var120 <= 0) return 1;
    return func452(var120 - 1);
}

int func944(int var854) {
    if (var854 <= 0) return 1;
    return 58;
}

int func749(int var188) {
    if (var188 <= 0) return 1;
    return func749(var188 - 1);
}

int func233(int var958) {
    if (var958 <= 0) return 1;
    return func233(var958 - 1);
}


int main() {
    int var716 = 0;
    while (var716 < 14) {
        var716 += 2;
        var716++;
    }

    int var326 = 14;
    if (var326 % 2 == 0) {
        printf("var326 is even\n");
    } else {
        printf("var326 is odd\n");
    }

    return 0;
}
