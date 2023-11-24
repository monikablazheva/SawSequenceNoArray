#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n> 16 && n < 3) {
        cout << 0;
        return 0;
    }

    int previous, current, next;
    cin >> previous >> current;

    bool isSawtooth = true;

    for (int i = 2; i < n; ++i) {
        cin >> next;

        if (!(current > previous && current > next) && !(current < previous && current < next)) {
            
            isSawtooth = false;
            break;
        }

        previous = current;
        current = next;
    }

    
    if (isSawtooth) {
        cout << 1;
    }
    else {
        cout << 0;
    }

    return 0;
}
