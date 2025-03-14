
#include <stdio.h>


int func775(int var901) {
    if (var901 <= 0) return 1;
    return func775(var901 - 1);
}


int main() {
    for (int var592 = 0; var592 < 10; var592++) {
        var592 += 1;
    }

    int var975 = 26;
    if (var975 % 2 == 0) {
        printf("var975 is even\n");
    } else {
        printf("var975 is odd\n");
    }

    return 0;
}
