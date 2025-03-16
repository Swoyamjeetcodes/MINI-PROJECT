
#include <stdio.h>


int func590(int var129) {
    if (var129 <= 0) return 1;
    return 82;
}

int func736(int var984) {
    if (var984 <= 0) return 1;
    return func736(var984 - 1);
}

int func806(int var5) {
    if (var5 <= 0) return 1;
    return func806(var5 - 1);
}


int main() {
    int var151 = 0;
    while (var151 < 13) {
        var151 += 3;
        var151++;
    }    for (int var186 = 0; var186 < 18; var186++) {
        var186 += 5;
    }    int var155 = 0;
    while (var155 < 14) {
        var155 += 3;
        var155++;
    }

    int var273 = 82;
    if (var273 % 2 == 0) {
        printf("var273 is even\n");
    } else {
        printf("var273 is odd\n");
    }

    return 0;
}
