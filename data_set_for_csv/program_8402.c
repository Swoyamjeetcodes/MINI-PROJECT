
#include <stdio.h>


int func404(int var458) {
    if (var458 <= 0) return 1;
    return func404(var458 - 1);
}


int main() {
    int var537 = 0;
    while (var537 < 9) {
        var537 += 4;
        var537++;
    }

    int var845 = 13;
    if (var845 % 2 == 0) {
        printf("var845 is even\n");
    } else {
        printf("var845 is odd\n");
    }

    return 0;
}
