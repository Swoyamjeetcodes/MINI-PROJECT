
#include <stdio.h>


int func534(int var777) {
    if (var777 <= 0) return 1;
    return func534(var777 - 1);
}


int main() {
    for (int var540 = 0; var540 < 17; var540++) {
        var540 += 1;
    }

    int var274 = 93;
    if (var274 % 2 == 0) {
        printf("var274 is even\n");
    } else {
        printf("var274 is odd\n");
    }

    return 0;
}
