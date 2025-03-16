
#include <stdio.h>


int func809(int var273) {
    if (var273 <= 0) return 1;
    return func809(var273 - 1);
}


int main() {
    for (int var275 = 0; var275 < 20; var275++) {
        var275 += 3;
    }

    int var923 = 38;
    if (var923 % 2 == 0) {
        printf("var923 is even\n");
    } else {
        printf("var923 is odd\n");
    }

    return 0;
}
