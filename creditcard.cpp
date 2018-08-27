#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;


    int odd=0,even,no;
    for(int i=s.size()-1;i>=0;i-=2)
    {
        int no=s[i]-'0';
        odd+=no;


    }
    even=0;
    for(int i=s.size()-2;i>=0;i-=2)
    {

        no=s[i]-'0';
        no*=2;
        if(no>9)
        {

           even+=no%10+no/10;
        }
        else
        {
            even+=no;
        }
    }

    if((even+odd)%10==0)
    {
        cout<<"credit card valid";
    }
    else
    {

        cout<<"credit card invalid";
    }

}
