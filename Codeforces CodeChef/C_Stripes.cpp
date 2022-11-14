#include <bits/stdc++.h>
using namespace std;

// grid given  8*8

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char arr[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }
        bool red =false; 
        for (int i = 0; i < 8; i++)
        {int redscore=0;
                if(arr[i][0]=='R'){
            for (int j = 0; j < 8; j++)
            {
                if(arr[i][j]=='R')
                {
                    redscore++;
                }
           


            }}
        if(redscore==8)
        {
            red=true
              ;
        }
        }
       
if(red==true)
{
    cout<<"R"<<endl;
}
else{

    cout<<"B"<<endl;
}



    }
//horzontal red hae
    return 0;
}