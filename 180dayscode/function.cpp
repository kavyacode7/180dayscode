#include<iostream>
using namespace std;

// bool prime(int n)
// {
//     if(n<2)
//     return 0;
//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0)
//         return 0;

//     }
//     return 1;
// }

// int fact(int m)
// {
//     int ans=1;
//     for(int i=1;i<=m;i++)
//     {
//         ans=ans*i;
         

//     }
//     return ans;
// }

// int main()
// {
//     int a,b;
//     cout<<"enter the number: ";
//     cin>>a>>b;
//     cout<<prime(a)<<endl;
//     cout<<fact(a)<<endl;
//     cout<<prime(b)<<endl;
//     cout<<fact(b )<<endl;
//     cout<<prime(b-a )<<endl;
//     cout<<fact(b-a )<<endl;
// }

// Find the cube of a number using Function

// int cube(int n)
// {
//     int num, pow=3,i;
   
//     num=n;
//     for(i=1;i<pow;i=i+1)
//     {
//         num=num*n;
//     }
//     return num;
// }

// int main()
// {

//     int a;
//     cout<<"enter the number: ";
//     cin>>a;
//     cout<<cube(a);
    
// }

// // 2. Reverse a number n using Function, Constraints: -5000<=n<=5000
// int reversenum(int n)
// {
//     int ans=0,rem;
//     while(n!=0)
//     {
//         rem=n%10;
//         n/=10;
//         if(n<=5000 || n>=-5000)
//         return 0;
//         ans=ans*10+rem;

//     }
//     return ans;
// }
 
// int main()
// {
//     int m;
//     cout<<"enter the number: ";
//     cin>>m;
//     cout<<reversenum(m);

// }


//  3. Swap 2 numbers a, b without using extra variables. Range of 
//     -10000<=a,b<=100000.

// int main()
// {
//     int a,b;
//     cout<<"enter the number: ";
//     cin>>a>>b;
//     if(a>-10000 && b<100000)
//    {
//     swap(a,b);
//     cout <<a<<b;
//    }
//    else 
//    cout<< 0;

// }
// 4. There are three numbers a,b,c. Put the value of a into b,
//  put value of b into c and put value of c into a. Do it using Function

// void  swap(int& a,int& b,int& c) //use pass by reference here to change of 
//                                   // values in int main function 
// {
//     int d;
//     d=a;
//   a=b;
//   b=c;
//   c=d;
//   cout<<a;
//   cout<<b;
//   cout<<c;

// }
// int main()
// {
//     int a,b,c;
//     cout <<"enter numbers: ";
//     cin>>a>>b>>c;
//     swap(a,b,c);
//     return 0;
     
// }
// 5.  Print “Hello Coder Army” n times using Function.
//  void print(int n)
//  {
//     int i;
//     for(i=1;i<=n;i++)
//     {
//         cout<<"Hello Coder Army"<<endl;

//     }
//  }
//   int main()
//   {
//     int n;
//     cout <<"enter the number : ";
//     cin>>n;
//     print(n);
//     return 0;
//   }

// 6. Given two numbers n, r. Find nCr (Combination). Use Function here. 
// long long  fact(int n )
// {
//     long long  fact=1,i;
//     for(i=1;i<=n;i++)
//     {
//         fact=fact*i;

//     }
//     return fact ;
// } 
//  long long  combination(int n ,int r)
//  {
//     if (r>n)
//     return  0;

//     else if (r==0 || r==n)
//     return 1;

//     long long numerator= fact(n);
//     long long denominator=fact(r) * fact(n-r);
    
//     return numerator / denominator;
//  }                            

//  int main()
//  {
//     int n,r;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"enter r: ";
//     cin>>r;
//     cout<<combination(n,r);
//     return 0;
//  }



// bishop moves 
// int bishopmoves(int a, int b)
// {
//     int count=0;
//     count+= min(8-a,8-b);
//     count+= min(a-1,b-1);
//     count+= min(8-a, b-1);
//     count+= min(a-1,8-b);

//     return count;

// }

// int main()
// {
//     int a,b;
//     cout<<"enter the position of bishop: ";
//     cin>>a>>b;
    
//     if(a>8|| b<1 || a<1 || b>8)
//     cout<<"enter the valid numbers between 1-8 ";
//     return 0;

    
//     cout<<bishopmoves(a,b);
//     return 0;

   
// }
