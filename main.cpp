#include <iostream>

using namespace std;

int main()
{
    int n, s, count[5]= {0};
    cin>>n;
    int taxi = 0;
    while (n--)
    {
        cin>>s;
        count[s] += 1;
    }
    taxi = count[4];
    count[4] = 0;
    while (count[1] != 0 && count[3] != 0) {
        count[1]--; count[3]--;
        taxi ++;
    }
    while (count[1] != 0 && count[2] != 0) {
        if (count[1]%2 == 0) {
            count[1] -= 2; 
        }else {
            count[1] --;
        }
        count[2]--;
        taxi ++;
    }
    while (count[2] != 0) {
        if (count[2]%2 == 0) {
            count[2] -= 2;
        }
        else {
            count[2]--;
        }
        taxi++;
    }
    while (count[1] != 0) {
        if (count[1]%4 == 0) {
            count[1] -= 4;
        }
        else if (count[1] < 4) {
            count[1] = 0;
        }else {
            count[1] -= count[1]%4;
        }
        taxi++;
    }
    
    
    taxi += count[3];
    cout<<taxi;
    
    return 0;
}

