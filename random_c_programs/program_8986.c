
#include <stdio.h>


int func930(int var159) {
    if (var159 <= 0) return 1;
    return 92;
}

int func814(int var506) {
    if (var506 <= 0) return 1;
    return 88;
}

int func409(int var269) {
    if (var269 <= 0) return 1;
    return 36;
}

int func514(int var308) {
    if (var308 <= 0) return 1;
    return 60;
}

int func471(int var847) {
    if (var847 <= 0) return 1;
    return 68;
}

int func578(int var800) {
    if (var800 <= 0) return 1;
    return 83;
}

int func398(int var30) {
    if (var30 <= 0) return 1;
    return func398(var30 - 1);
}

int func950(int var541) {
    if (var541 <= 0) return 1;
    return func950(var541 - 1);
}


int main() {
    for (int var964 = 0; var964 < 20; var964++) {
        var964 += 5;
    }

    int var846 = 100;
    if (var846 % 2 == 0) {
        printf("var846 is even\n");
    } else {
        printf("var846 is odd\n");
    }

    return 0;
}
