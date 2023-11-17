#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int i = 1;
    while(i<=n){
        int space = n-i;
        while(space){
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        int count = 1;
        while(j<=i){
            cout << count;
            count = count +1;
            j = j + 1;
        }
        int k = 1;
        int start_cond = i-1;
        while(start_cond){
            cout << start_cond;
            start_cond = start_cond - 1;
        }
        cout << endl;
        i = i + 1;
        }
        cout << endl;

        int d = 1;
        
        while(d<=n){
            int m = 1;
            while(m<=d){
                cout << "*";
                m = m + 1;
            }
            cout << endl;
            d = d + 1;

        }
    }


