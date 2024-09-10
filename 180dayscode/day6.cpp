#include<iostream>
using namespace std;

//    *
//   * *
//  * * *
// * * * * 
// * * * *
//  * * *
//   * * 
//    *   

// int main()
// {
//     int row,col,n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row=row+1)
//     {
//         for(col=1;col<=n-row;col=col+1)
//         {
//             cout<<" ";
//         }
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         cout<<endl;
//     }
//      for(row=n;row>=1;row=row-1)
//     {
//         for(col=1;col<=n-row;col=col+1)
//         {
//             cout<<" ";
//         }
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         cout<<endl;
//     }
// }

//     *
//    * *
//   * * *
//  * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *
// int main()
// {
//     int row,col,n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row=row+1)
//     {
//         for(col=1;col<=n-row;col=col+1)
//         {
//             cout<<" ";
//         }
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         cout<<endl;
//     }
//      for(row=n-1;row>=1;row=row-1)
//     {
//         for(col=1;col<=n-row;col=col+1)
//         {
//             cout<<" ";
//         }
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         cout<<endl;
//     }
// }

// *             *       
// * *         * *      
// * * *     * * *
// * * * * * * * *  
// * * *     * * *
// * *         * *
// *             *

// int main()
// {
//     int row,col,n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row=row+1)
//     {
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         for(col=1;col<=2*n-2*row;col=col+1)
//         cout<<"  ";
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         cout<<endl;
//     }
//     for(row=n-1;row>=1;row=row-1)
//     {
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         for(col=1;col<=2*n-2*row;col=col+1)
//         cout<<"  ";
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         cout<<endl;
//     }
// }


// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *
// *             *
// * *         * *
// * * *     * * *
// * * * * * * * * 

// int main()
// {
//     int row,col,n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=n;row>=1;row=row-1)
//     {
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         for(col=1;col<=2*n-2*row;col=col+1)
//         cout<<"  ";
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         cout<<endl;
//     }
//         for(row=1;row<=n;row=row+1)
//     {
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         for(col=1;col<=2*n-2*row;col=col+1)
//         cout<<"  ";
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         cout<<endl;
//     }
// }

//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

// int main()
// {
//     int row,col,n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row=row+1)
//     {
//         // space print
//         for(col=1;col<=n-row;col=col+1)
//         cout<<"  ";
//         for(col=1;col<=row;col=col+1)
//         cout<<col<<" ";
//         for(col=row-1;col>=1;col=col-1)
//         cout<<col<<" ";
//         cout<<endl;
//     }

// }

//     *
//    * *
//   * * *
//  * * * *
// * * * * *

// int main()
// {
//     int row,col,n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row=row+1)
//     {
//         for(col=1;col<=n-row;col=col+1)
//         {
//             cout<<" ";
//         }
//         for(col=1;col<=row;col=col+1)
//         cout<<"* ";
//         cout<<endl;
//     }
// }

// // 
// Second Pattern: Take an input n from the user,
//  and create a pattern like below, for n=5, we have output like this.
   
    
//               1
//             1 2 3
//           1 2 3 4 5
//         1 2 3 4 5 6 7
//       1 2 3 4 5 6 7 8 9
//  int main()
//  {
//     int row,col,n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row=row+1)
//     {
//         for(col=1;col<=n-row;col=col+1)
//         cout<<"  ";
//         for(col=1;col<=2*row-1;col=col+1)
//         cout<<col<<" ";
//         cout<<endl;
//     }
//  }


    //           A
    //         A B A
    //       A B C B A
    //     A B C D C B A
    //   A B C D E D C B A

// int main()
// {
//     int row,col,n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row=row+1)
//     {
//         // space print
//         for(col=1;col<=n-row;col=col+1)
//         cout<<"  ";
//         char name='A';
//         for(col=1;col<=row;col=col+1)
//         cout<<char(name+(col-1))<<" ";
//         for( col=row-1;col>=1;col=col-1)
//         {
//             char name='A';
//             cout<<char(name+col-1)<<" ";

//         }
//         cout<<endl;
//     }
// }

// took reference from cody ai
// int main() {
//     int n = 5; // number of rows

//     for (int i = 0; i < n; i++) {
//         // Print leading spaces
//         for (int j = 0; j < n - i - 1; j++) {
//             cout << "  ";
//         }

//         // Print ascending characters
//         for (int j = 0; j <= i; j++) {
//             cout << char('A' + j) << " ";
//         }

//         // Print descending characters
//         for (int j = i - 1; j >= 0; j--) {
//             cout << char('A' + j) << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

