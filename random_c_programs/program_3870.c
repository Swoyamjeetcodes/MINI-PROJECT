
#include <stdio.h>


int func945(int var949) {
    if (var949 <= 0) return 1;
    return func945(var949 - 1);
}


int main() {
    for (int var838 = 0; var838 < 14; var838++) {
        var838 += 5;
    }

    int var905 = 77;
    if (var905 % 2 == 0) {
        printf("var905 is even\n");
    } else {
        printf("var905 is odd\n");
    }

    return 0;
}
