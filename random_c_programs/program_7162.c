
#include <stdio.h>


int func422(int var676) {
    if (var676 <= 0) return 1;
    return func422(var676 - 1);
}

int func156(int var977) {
    if (var977 <= 0) return 1;
    return 68;
}

int func653(int var956) {
    if (var956 <= 0) return 1;
    return func653(var956 - 1);
}


int main() {
    int var890 = 0;
    while (var890 < 18) {
        var890 += 4;
        var890++;
    }

    int var337 = 57;
    if (var337 % 2 == 0) {
        printf("var337 is even\n");
    } else {
        printf("var337 is odd\n");
    }

    int var545 = 25;
    if (var545 % 2 == 0) {
        printf("var545 is even\n");
    } else {
        printf("var545 is odd\n");
    }

    return 0;
}
