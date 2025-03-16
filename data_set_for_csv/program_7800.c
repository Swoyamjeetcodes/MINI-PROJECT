
#include <stdio.h>


int func142(int var457) {
    if (var457 <= 0) return 1;
    return func142(var457 - 1);
}

int func415(int var264) {
    if (var264 <= 0) return 1;
    return func415(var264 - 1);
}

int func603(int var665) {
    if (var665 <= 0) return 1;
    return func603(var665 - 1);
}

int func698(int var867) {
    if (var867 <= 0) return 1;
    return 16;
}


int main() {
    int var845 = 0;
    while (var845 < 12) {
        var845 += 1;
        var845++;
    }

    int var942 = 89;
    if (var942 % 2 == 0) {
        printf("var942 is even\n");
    } else {
        printf("var942 is odd\n");
    }

    return 0;
}
