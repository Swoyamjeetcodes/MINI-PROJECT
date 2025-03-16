
#include <stdio.h>


int func120(int var129) {
    if (var129 <= 0) return 1;
    return func120(var129 - 1);
}


int main() {
    for (int var994 = 0; var994 < 20; var994++) {
        var994 += 1;
    }

    int var108 = 0;
    if (var108 % 2 == 0) {
        printf("var108 is even\n");
    } else {
        printf("var108 is odd\n");
    }

    return 0;
}
