#include <iostream> 
using namespace std; 
 
int main() 
{     int r, c = 1; 
 
    cout << "Enter number of rows: "; 
    cin >> r; 
 
    for(int i = 0; i < r; i++) 
    { 
        for(int j= r; j >= i; j--)             cout <<"  "; 
 
        for(int k = 0; k <= i; k++) 
        { 
            if (k == 0 || i == 0)                 c = 1;      
			       else                 c = c*(i-k+1)/k;   
				             cout << c << "   "; 
        } 
        cout << endl; 
    } 
 
    return 0; 
} 
