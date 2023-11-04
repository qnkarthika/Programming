Mirchi Siva, a famous kollywood actor who has a huge fanbase, approaches a producer for his next movie. The producer will do a movie with an actor if he has a minimum success streak.
A movie is considered a success if it collects equal or more in the box office collection than the previous movie. Given an array 'arr' of size 'n' and the minimum success streak 'k'.
Tell Siva if the producer will do his next film with him or not. Also tell Siva his maximum success streak.
The producer will not give minimum success streak 'k' more than array size.

Program:

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k;
    cin >> k;

    int c = 1;
    int m = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            c++;
            if (c > m) {
                m = c;
            }
        } else {
            c = 1;
        }
    }

    if (m >= k) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    cout << m << endl;

    return 0;
}
