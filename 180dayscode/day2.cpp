#include<iostream>
using namespace std;

// to print table of given number 
// int main()
// {
//     int n, i;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(i=1;i<=10;i=i+1)
//     {
//        cout<<n<<"*"<<i<<"="<<i*n<<endl; 
//     }   


// to find power of given number 
// }
// int main()
// {
//     int n, i ,pow,num;
//     cout<<"enter the number: ";
//     cin>>n;
//     cout<<"enter the power: ";
//     cin>>pow;
//     num=n;
//     for(i=1;i<pow;i=i+1)
//     {
//         num=num*n;
//     }
//     cout<<num;
// }

// to print factors of given number which can divisible by given no. 
// int main()
// {
//     int n,i,num;
//     cin>>n;
//     cin>>num;
//     for(i=1;i<=num;i=i+1)
//     {
//         if(i%n==0)
//         {
//             cout<<i<<endl;
//         }
//         else
//         {
//             cout<<" ";
//         }
//     }
//     return 0;
// }
// prime number in given number 
// int main()
// {
//     int n,i;
//     cout<<"enter the number: ";
//     cin>>n;
    
    
//         if(n<2)
//         {
//            cout<<" not a prime number";
//            return 0; 
 
//         }
//         else
//         {
//             for(i=2;i<n;i=i+1)
//             {
//                 if(n%i==0)
//                 {
//                     cout<<"not a prime number";
//                     return 0;
//                 }

//             }
//          cout<<" prime number ";
//         }

// } 

// to print sum of n natural number
// int main()
// {
//     int n, i,num=0;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(i=1;i<=n;i=i+1)
//     {
//         num=num+i;
        
//     }
//     cout<<num;
// }

// to print sum of n square no.
// int main()
// {
//     int n,i,num=0;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(i=1;i<=n;i=i+1)
//     {
//         num=num+(i*i);
       
//     }
//     cout<<num;
    

// }

// factorial number
int main()
{
    int i;
    int n,fact=1;
    cout<<"enter the number: ";
    cin>>n;
    for(i=1;i<=n;i=i+1)
    {
        fact=fact*i;

    }
    cout<<fact;

}

// fibonacci number 
// int main()
// {
//     int n,i,c,l=0,p=1;
//     cout<<"enter the number: ";
//     cin>>n;
//     if(n>=0)
//     {
//         cout<<l<<" ";
//     }
//     if(n>=1)
//     {
//         cout<<p<<" ";
//     }
//     for(i=2;i<=n;i=i+1)
//     {
//         c=l+p;
//         cout<<c<<" ";
//         l=p;
//         p=c;
//     }
    
// }

// homework questions
// Print number from 280 to 250 with the help of for loop
// int main()
// {
//     int i,n;
//     n=280;
//     for(i=280;i>=250;i=i-1)
//     {
//         cout<<i<<" ";
//     }
    
    
// }

// Print char from ‘A’ to ‘Z’ with the help of a for loop
// int main()
// {
//     char c;
    
//     for(c='A';c<='Z';c=c+1)
//     {
//         cout<<c<<" ";
//     }
// }

// Print char from ‘Z’ to ‘A’ with the help of a for loop
// int main()
// {
//     char i;
//     for(i='Z';i>='A';i=i-1)
//     cout<<i<<" ";
// }

// There is an Arithmetic Progression, First number is 220 and Common Difference is 7.
//  So print all the numbers from 220 to 730 which follow the AP.
// int main()
// {
//     int i;
//     for(i=220;i<=730;i=i+7)
//     {
//         cout<<i<<" ";
//     }
// }

// Print Sum of square of first n natural number
// int main()
// {
//     int n,i,num=0;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(i=1;i<=n;i=i+1)
//     {
//         num=num+(i*i);
        
        
//     }
//     cout<<num;
// }

// Print Sum of cube of first n natural number
// int main()
// {
//     int n,i,num=0;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(i=1;i<=n;i=i+1)
//     {
//         num=num+(i*i*i);

//     }
//     cout<<num;
// }

// Print n’th Fibonacci number
// int main()
// {
//     int i,n,last=0,curr,prev=1;
//     cout<<"enter the position of nth number: ";
//     cin>>n;
//     if(n<=0)
//     {
//         cout<<"enter the positive number ";
//         return 0;
//     }
//     else if(n==1)
//     {
//         cout<<"the first fibonacci number is 0";
//         return 0;
//     }
//     else
//     {
//         for(i=2;i<n;i=i+1)
//         {
//             curr=last+prev;
//             last = prev;
//             prev = curr;
//         }
//         cout<<prev;
//         return 0;
//     }
//     return 0;
// }



