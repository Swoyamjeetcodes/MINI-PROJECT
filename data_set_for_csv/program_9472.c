
#include <stdio.h>


int func560(int var546) {
    if (var546 <= 0) return 1;
    return func560(var546 - 1);
}


int main() {
    int var845 = 0;
    while (var845 < 13) {
        var845 += 5;
        var845++;
    }

    int var923 = 23;
    if (var923 % 2 == 0) {
        printf("var923 is even\n");
    } else {
        printf("var923 is odd\n");
    }

    return 0;
}
