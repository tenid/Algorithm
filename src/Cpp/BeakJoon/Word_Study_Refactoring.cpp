/*
#include <cstdio>

const int maxLen = 1000*1000;

int main() {
    char buf[maxLen+1];
    scanf("%s", buf);

    int cnt[26] = {};
    for (char *p=buf; *p; p++){
		// a보다 크면 a만큼 아니면 A만큼 빼준다.
        cnt[*p - (*p >= 'a'? 'a': 'A')]++;
	}
    int max = 0;
    char r = 0;
    for (int i=0; i<26; i++) {
        if (cnt[i] > max) {
            max = cnt[i];
            r = 'A' + i;
        } else if (cnt[i] == max)
            r = '?';
    }
    printf("%c\n", r);
}
*/