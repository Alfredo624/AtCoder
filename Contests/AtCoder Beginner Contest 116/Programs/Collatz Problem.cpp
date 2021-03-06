#include <iostream>
#include <map>

using namespace std;

int f(int n)
{
    return (n%2 == 0 ? n/2 : 3*n + 1);
}

int main()
{
    int start;
    cin >> start;

    const int NOT_FOUND = -1;
    map <int, int> visited;

    int answer = NOT_FOUND;

    visited[start] = true;
    int previous = start;

    for(int i = 2; answer == NOT_FOUND; i++)
    {
        int next = f(previous);

        if(visited[next])
        {
            answer = i;
        }

        visited[next] = true;
        previous = next;
    }

    return 0;
}
