#include<iostream>
using namespace std;

// table printing using while loop
// int main()
// {
//     int n ,i=1;
//     cout<<"enter the number: ";
//     cin>>n;
//     while(i<=10)
//     {
//         cout<<n*i<<endl;
//         i=i+1;

//     }
// }

// print factors of n using while loop
// int main()
// {
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         if(n%i==0)
//         cout<<i<<endl;
//         else
//         cout<<"";
//         i++;
//     }
// }

//print even number from 1 to n
// using while loop
// int main()
// {
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         if(i%2==0)
//         cout<<i<<" ";
//         i++;
//     }
// } 
// do while loop 
// int main()
// {
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     int i=1;
//     do{
//         if(i%2==0)
//         cout<<i<<" ";
//         i++;
//     }while(i<=n);

// }

// print factorial number using while loop
// int main()
// {
//     int n,fact=1;
//     cout<<"enter the number: ";
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//       fact=fact*i;
//       i++;  
//     }
//     cout<<fact;
// }
// using do while loop
// int main()
// {
//     int n,fact=1;
//     cout<<"enter the number: ";
//     cin>>n;
//     int i=1;
//     do
//     {
//       fact=fact*i;
      
//       i++;

        
//     }while(i<=n);
//     cout<<fact;
    
// }

// print all numbers from 1 to n which are not divisible by 3 and 5 use 
// continue
// int main()
// {
//     int n;
//     cout<<"enter the number: ";
//     cin>>n;
//     int i;
//     for(i=1;i<=n;i=i+1)
//     {
//         if(i%3==0 || i%5==0)
//         continue;

//         cout<<i;
//     }
// }

//  Given a number n, print the corresponding month of it. For n=1,
//   print Jan, n=2,  print Feb…, if the user puts any invalid number,
//    don’t do anything.  (Use switch here)

// int main()
// {
//     int n;
//     cout<<"enter the month ";
//     cin>>n;

//     switch(n)
//     {
//         case 1:
//         cout<<"january";
//         break;

//          case 2:
//         cout<<"february";
//         break;

//          case 3:
//         cout<<"march";
//         break;

//          case 4:
//         cout<<"april";
//         break;

//          case 5:
//         cout<<"may";
//         break;

//          case 6:
//         cout<<"june";
//         break;

//          case 7:
//         cout<<"july";
//         break;

//          case 8:
//         cout<<"august";
//         break;

//          case 9:
//         cout<<"september";
//         break;

//          case 10:
//         cout<<"october";
//         break;

//          case 11:
//         cout<<"november";
//         break;

//          case 12:
//         cout<<"december";
//         break;

//         default:
//         cout<<"";
//     }
        
// }

//  Print all the Capital and small letters  using a while loop.
//  It means A-Z, then a-z.
    // int main()
    // {
        
    //     char name='A';
    //     while(name<='Z')
    //     {
            
    //         cout<<name<<" ";
    //         name=name+1;
    //     }
    //     cout<<endl;
    //     {
    //         char name='a';
    //         while(name<='z')
    //         {
    //             cout<<name<<" ";
    //             name=name+1;
    //         }
    //     }
    // }

// Give a number n, find if it is prime or not, 
// // use a while loop and break here to solve it.
// int main()
// {
//     int n,i;
//     cout<<"enter the number: ";
//     cin>>n;
//     if(n<=1)
//     cout<<"not a prime number";
//     i=1;
//     while(i<=n)
//     {
//         if(i%2==1)
//         cout<<"not a prime number "<<endl;
        
//         else
//         cout<<"prime number";
        
//         i++;
//     }
// }
