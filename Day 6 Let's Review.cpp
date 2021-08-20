#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    
    int T ; // to get no.of testcases ...
    cin>>T ;
    
    string  S[T] ;
    int N ;
    
    
    for (int i = 0 ; i < T ; i++)
    {
        cin>>S[i];
    }
    
    int p = 0;
    
    while(p < T )
    {
        N  = S[p].length();
        for( int i = 0 ; i< N ; i+= 2)
        {
           cout <<S[p][i];
    
        }
        cout<<" ";
        
        for( int i = 1 ; i< N ; i+= 2)
        {
            cout <<S[p][i];        
        }
        cout<<endl;
        p++;
    }
    
     
    return 0;
}
