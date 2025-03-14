
#include <stdio.h>


int func636(int var591) {
    if (var591 <= 0) return 1;
    return 100;
}

int func78(int var509) {
    if (var509 <= 0) return 1;
    return func78(var509 - 1);
}

int func891(int var996) {
    if (var996 <= 0) return 1;
    return func891(var996 - 1);
}


int main() {
    for (int var873 = 0; var873 < 16; var873++) {
        var873 += 5;
    }    for (int var849 = 0; var849 < 20; var849++) {
        var849 += 5;
    }

    int var938 = 50;
    if (var938 % 2 == 0) {
        printf("var938 is even\n");
    } else {
        printf("var938 is odd\n");
    }

    return 0;
}
