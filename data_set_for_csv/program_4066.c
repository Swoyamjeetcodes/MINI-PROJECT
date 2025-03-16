
#include <stdio.h>


int func237(int var159) {
    if (var159 <= 0) return 1;
    return func237(var159 - 1);
}


int main() {
    for (int var339 = 0; var339 < 18; var339++) {
        var339 += 4;
    }

    int var143 = 57;
    if (var143 % 2 == 0) {
        printf("var143 is even\n");
    } else {
        printf("var143 is odd\n");
    }

    return 0;
}
