#include<iostream>
using namespace std;
// First Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//          1
//        2 1
//      3 2 1
//    4 3 2 1
//  5 4 3 2 1          

//  int main()
//  {
//     int row,col,n;
//     cout<<"enter the number: ";
//     cin>>n;
//     for(row=1;row<=n;row=row+1)
//     {
//       // print space
//       for(col=1;col<=(n-row);col=col+1)
//       {
//          cout<<"  ";
//       }
//       // print number 
//       for(col=1;col<=row;col=col+1)
//       {
//          cout<<row-(col-1)<<" ";
//       }
//       cout<<endl;
//     }       
    
//  }

// Second Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.
   
    
//               A
//             B B
//           C C C
//         D D D D
//       E E E E E

// int main()
// {
//   int row,col,n;
//   cout<<"enter the number: ";
//   cin>>n;
//   for(row=1;row<=n;row=row+1)
//   {
//    for(col=1;col<=(n-row);col=col+1)
//    {
//       cout<<"  ";
//    }
//    for(col=1;col<=row;col=col+1)
//    {
//       char name='A'+(row-1);
//       cout<<name<<" ";
//    }
//    cout<<endl;
//   }

// }

// Third Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.

//              5
//            5 4
//          5 4 3
//        5 4 3 2 
//      5 4 3 2 1
// int main()
// {
//    int row,col,n;
//    cout<<"enter the number: ";
//    cin>>n;
//    for(row=1;row<=n;row=row+1)
//    {
//       for(col=1;col<=(n-row);col=col+1)
//       {
//          cout<<"  ";
//       }
//       for(col=1;col<=row;col=col+1)
//       {
//          cout<<n-(col-1)<<" ";
//       }
//       cout<<endl;
//    }
   
// }

// Fourth Pattern: Take an input n from the user, and create a pattern like below, for n=5, we have output like this.


//              E
//            E D
//          E D C
//        E D C B
//      E D C B A

// int main()
// {
//   int row,col,n;
//   cout<<"enter the number: ";
//   cin>>n;
//   for(row=1;row<=n;row=row+1)
//   {
//    for(col=1;col<=(n-row);col=col+1)
//    {
//       cout<<"  ";
//    }
//    for(col=1;col<=row;col=col+1)
//    {
//       char name='E'-(col-1);
//       cout<<name<<" ";
//    }
//    cout<<endl;
//   }

// }