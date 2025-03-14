
#include <stdio.h>


int func471(int var183) {
    if (var183 <= 0) return 1;
    return func471(var183 - 1);
}


int main() {
    int var901 = 0;
    while (var901 < 6) {
        var901 += 2;
        var901++;
    }    for (int var785 = 0; var785 < 6; var785++) {
        var785 += 2;
    }    for (int var130 = 0; var130 < 5; var130++) {
        var130 += 2;
    }

    int var865 = 20;
    if (var865 % 2 == 0) {
        printf("var865 is even\n");
    } else {
        printf("var865 is odd\n");
    }

    return 0;
}
