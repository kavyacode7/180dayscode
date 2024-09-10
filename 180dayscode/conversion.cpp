#include <iostream>
using namespace std;
// convert decimal number into binary number
// int main()
// {
//     int num,ans=0,rem,mul=1;
//     cout<<"enter the number: ";
//     cin>>num;
//     while(num>0)
//     {
//         rem=num%2;
//         num=num/2;
//         ans=rem*mul+ans;
//         mul=mul*10;

//     }

//     cout<<ans<<endl;
// }
// binary to decimal number 
// int main()
// {
//     int num,ans=0,rem,mul=1;
//     cout<<"enter the number: ";
//     cin>>num;
//     while(num>0)
//     {
//         rem=num%10;
//         num=num/10;
//         ans=rem*mul+ans;
//         mul=mul*2;

//     }

//     cout<<ans<<endl;
// }

// octa to binary number 
// int main()
// {
//     int num,ans=0,rem,mul=1;
//     cout<<"enter the number: ";
//     cin>>num;
//     while(num>0)
//     {
//         rem=num%8;
//         num=num/8;
//         ans=rem*mul+ans;
//         mul=mul*10;

//     }
//     cout<<ans<<endl;
//     int num1=ans,ans1=0,rem1,mul1=1;
//     while(num1>0)
//     {
//         rem1=num1%2;
//         num1/=2;
//         ans1=rem1*mul1+ans1;
//         mul1*=10;

//     }
//     cout<<ans1<<endl;

    
// }

//to count no. of 1 bit in binary no. 
int main()
{
    int num,ans=0,rem,mul=1;
    cout<<"enter the number: ";
    cin>>num;
    while(num>0)
    {
        rem=num%2;
        num=num/2;
        ans=rem*mul+ans;
        mul=mul*10;

    }
    cout<<ans<<endl;
    int num1=ans,ans1=0,rem1;
    while(num1>0)
    {
        rem1=num1%10;
        num1/=10;
       ans1= rem1+ans1;
       

    }
    cout<<ans1<<endl;

}