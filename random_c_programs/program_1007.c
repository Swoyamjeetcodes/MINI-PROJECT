
#include <stdio.h>


int func820(int var217) {
    if (var217 <= 0) return 1;
    return 77;
}

int func791(int var433) {
    if (var433 <= 0) return 1;
    return func791(var433 - 1);
}

int func431(int var688) {
    if (var688 <= 0) return 1;
    return func431(var688 - 1);
}

int func998(int var445) {
    if (var445 <= 0) return 1;
    return func998(var445 - 1);
}

int func372(int var570) {
    if (var570 <= 0) return 1;
    return func372(var570 - 1);
}


int main() {
    int var161 = 0;
    while (var161 < 16) {
        var161 += 2;
        var161++;
    }

    int var326 = 88;
    if (var326 % 2 == 0) {
        printf("var326 is even\n");
    } else {
        printf("var326 is odd\n");
    }

    return 0;
}
