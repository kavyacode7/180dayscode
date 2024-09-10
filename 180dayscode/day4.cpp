#include<iostream>
using namespace std;

// 5
// 5 4 
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

// int main()
// {
//     int row,col,count;
//     cout<<"enter the number: ";
//     cin>>count;
//     for(row=1;row<=count;row=row+1)
//     {
//         for(col=count;col>=count-(row-1);col=col-1)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

// * * * * *
// * * * * 
// * * * 
// * * 
// *
//  int main()
//  {
//     int row ,col;
//     for(row=5;row>=1;row=row-1)
//     {
//         for(col=1;col<=row;col=col+1)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//  }

// 2nd method 
//  int main()
//  {
//     int row ,col;
//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=1;col<=5-(row-1);col=col+1)
//         {
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//  }

// 1 2 3 4 5
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 

// int main()
// {
//     int col,row;
//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=1;col<=5-(row-1);col=col+1)
//         {
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }

// a
// b b
// c c c
// d d d d
// e e e e e

// int main()
// {
//     int row,col;
//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=1;col<=row;col=col+1)
//         {
//             char name='a'+(row-1);
//             cout<<name<<" ";
//         }
//         cout<<endl;
//     }

// }

// a 
// a b 
// a b c 
// a b c d
// a b c d e
// int main()
// {
//     int row,col;
//     for(row=1;row<=5;row=row+1)
//     {
        
//         for(col=1;col<=row;col=col+1)
//         {
//             char name='a';
//             cout<<char (name+(col-1))<<" ";
//         }
//         cout<<endl;
//     }

// } 




// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

// int main()
// {
//     int row,col;
//     for(row=1;row<=5;row=row+1)
//     {
//         for(col=row;col>=1;col=col-1)
//         {
           
//            cout<<col<<" ";
           
//         }
//         cout<<endl;
//     }
// }

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6 
// 1 2 3 4 5 6 7

// int main()
// {
//     int row,col,count;
//     cout<<"enter the number: ";
//     cin>>count;
//     for(row=1;row<=count;row=row+1)
//     {
//         for(col=1;col<=row;col=col+1)
//         {
           
//            cout<<col<<" ";
           
//         }
//         cout<<endl;
//     }
// }

// int main()
// {
//     int row,col,count,n;
//     cout<<"enter the number: ";
//     cin>>count;
//     for(row=1;row<=count;row=row+1)
//     {
//         for(col=1;col<=row;col=col+1)
//         {
           
//            n=col;
//            cout<<n<<" ";

           
//         }
//         cout<<endl;
        
     
//     }
//     cout<<row;
//  }

// A 
// A B
// A B C
// A B C D

// int main()
// {
//     int row,col;
//     for(row=1;row<=4;row=row+1)
//     {
        
//         for(col=1;col<=row;col=col+1)
//         {
//             char name='A';
//             cout<<char (name+(col-1))<<" ";
//         }
//         cout<<endl;
//     }

// } 

// 10
// 10 11
// 10 11 12
// 10 11 12 13
// 10 11 12 13 14
// 10 11 12 13 14 15
// int main()
// {
//     int row,col,count;
//     cout<<"enter the number: ";
//     cin>>count;
    
//     for(row=1;row<=6;row=row+1)
//     {
//         for(col=1;col<=row;col=col+1)
//         {
           
//            cout<<count+(col-1)<<" ";
           
           
//         }
        
//         cout<<endl;
//     }
// }

// A B C D 
// A B C
// A B
// A

// int main()
// {
//     int col,row;
//     for(row=1;row<=4;row=row+1)
//     {
//         char name='A';
//         for(col=1;col<=4-(row-1);col=col+1)
//         {
           
//             cout<<name<<" ";
//             name=name+1;
//         }
//         cout<<endl;
//     }
// }

