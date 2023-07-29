#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
	int len = strlen(str);
	int start = 0;
	int end = len - 1;

	while (start < end) {
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}

	start = 0;
	end = 0;
	while (end < len) {
		if (str[end] == ' ') {
			int wordEnd = end - 1;
			while (start < wordEnd) {
				char temp = str[start];
				str[start] = str[wordEnd];
				str[wordEnd] = temp;
				start++;
				wordEnd--;
			}
			start = end + 1;
		}
		end++;
	}

	int wordEnd = end - 1;
	while (start < wordEnd) {
		char temp = str[start];
		str[start] = str[wordEnd];
		str[wordEnd] = temp;
		start++;
		wordEnd--;
	}
}

int main() {
	char str[] = "mohamed gamal";
	printf("Original string: %s\n", str);

	reverseWords(str);

	printf("Reversed string: %s\n", str);

	return 0;
}
