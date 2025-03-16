
#include <stdio.h>


int func323(int var360) {
    if (var360 <= 0) return 1;
    return func323(var360 - 1);
}


int main() {
    for (int var64 = 0; var64 < 10; var64++) {
        var64 += 4;
    }

    int var426 = 68;
    if (var426 % 2 == 0) {
        printf("var426 is even\n");
    } else {
        printf("var426 is odd\n");
    }

    return 0;
}
