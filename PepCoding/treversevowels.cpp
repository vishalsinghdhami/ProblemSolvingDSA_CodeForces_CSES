#include<bits/stdc++.h>
using namespace std;

bool isVowel(string &str,int indx)
{
    if(str.at(indx) == 'a' || str.at(indx) == 'e' || str.at(indx) == 'i' || str.at(indx) == 'o' || str.at(indx) == 'u' || str.at(indx) == 'A' || str.at(indx) == 'E' || str.at(indx) == 'I' || str.at(indx) == 'O' || str.at(indx) == 'U')
    {
     return true;
    }
    return false;
}


// void swapp(string &str, int a, int b)
// {
//     char temp = str.at(a);
//     str.at(a) = str.at(b);
//     str.at(b) = temp;
// }

string reverseVowels(string &s)
{
    int left = 0;
    int right = s.size()-1;
   
    while(left<right)
    {
        while(left<right && isVowel(s,left) == false)
        {
            left++;
        }
        while(left<right && isVowel(s,right) == false)
        {
            right--;
        }
       
        swap(s.at(left),s.at(right));
        left++;
        right--;
    }
    return s;
}

int main()
{
    string str;
    cin>>str;
   
    string res = reverseVowels(str);
    cout<<res;
   
}                                