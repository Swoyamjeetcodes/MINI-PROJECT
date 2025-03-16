
#include <stdio.h>


int func29(int var47) {
    if (var47 <= 0) return 1;
    return func29(var47 - 1);
}


int main() {
    int var278 = 0;
    while (var278 < 12) {
        var278 += 2;
        var278++;
    }

    int var805 = 89;
    if (var805 % 2 == 0) {
        printf("var805 is even\n");
    } else {
        printf("var805 is odd\n");
    }

    return 0;
}
