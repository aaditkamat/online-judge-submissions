#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int level = 0, count = 0, min = 0;
    for (int i = 0; i <= n; i++) {
        if (s[i] == 'U') {
            level++;
        } else {
            level--;
        }
        if (level < min) {
            min = level;
        }
        if (level == 0 && min < 0) {
            count++;
            min = 0;
        }
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
