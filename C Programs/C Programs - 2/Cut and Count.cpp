#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int length;
    string S;
    cin >> length >> S;

    int answer = 0;
    for(int break_point = 1; break_point < length - 1; break_point++)
    {
        const int NO_OF_ALPHABETS = 26;

        vector <int> X_has(NO_OF_ALPHABETS, false);
        for(int i = 0; i <= break_point; i++)
            X_has[S[i] - 'a'] = true;

        vector <int> Y_has(NO_OF_ALPHABETS, false);
        for(int i = break_point + 1; i < length; i++)
            Y_has[S[i] - 'a'] = true;

        int current_answer = 0;

        for(int alphabet = 0; alphabet < NO_OF_ALPHABETS; alphabet++)
            current_answer += (X_has[alphabet] && Y_has[alphabet]);

        answer = max(answer, current_answer);
    }

    cout << answer;
    return 0;
}
