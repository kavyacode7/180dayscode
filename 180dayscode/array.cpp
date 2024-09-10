#include <iostream>
using namespace std;
// int main()
// {
//     int arr[5] ={1,4,5,6,7};
//     for(int i=0;i<5;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }

// int main()
// {
//     int arr[5] = {1,4,3,6,7};
//     cout<<sizeof(arr)/sizeof(arr[0]);


// }

//Take 
//Take 20 elements from user input and 
//find its sum with the help of an array

// int main()
// {
//     int sum=0;
//     int arr[20];
//     for(int i=0;i<20;i++)
//     {
//         cin>>arr[i];//it will take elements more than 20  but it
//                     // will count only 20 elements
       
//     sum=arr[i]+sum;
//     }
  
//     cout<<sum;
// }

// Calculate the average of elements in an array of size 18
// int main()
// {
//     int sum=0;
//     int arr[18];
//     for(int i=0;i<18;i++)
//     {
//         cin>>arr[i];
//         sum=arr[i]+sum;
      
//     }
//     int avg=sum/18;
//     cout<<avg;
// }

//  Find the index of a specific element in an array,
//   if the element is nor present, print -1.
//   Ask the size of the array from the user and then implement it
// int main()
// {
//     int size;
//     cout<<"enter the size of the array: ";
//     cin>>size;

//     int arr[100];
//      cout<<"enter the elements in array";
//     for(int i=0;i<size;i++)
//     {
       

//         cin>>arr[i];
//     }

//     int target ;
//     cout<<"enter the number to want to find: ";
//     cin>>target;

//     int index=-1;
//     for(int i=0;i<size;++i)
//     {
//         if(arr[i]==target)
//        {index=i;
//        break;}
        

//     }
//     cout<<index;
//      return 0;

// }

// Create an array of char types and store ‘a’ to ‘z’ in it. 
// // Then print the element of the arrays.
// int main()
// {
//     char name[26];
//     for(int i=0;i<26;++i)
//     {
//         name[i]='a'+i;
        

//     }
//     cout<<name<<endl;
   
// }

//  Find the second largest element in an array of unique elements of size n.
 // Where n>3

int main()
{
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    if(n<3)
    {cout<<1;
    return 0;
    }
 
    int arr[n];
    int ans=INT_MIN;
    cout<<"enter the elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    
        if(arr[i]>ans)
        ans=arr[i];
    }
    
   
   
    int ans1=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=ans)
        ans1=max(ans1,arr[i]);

    }
    cout<<ans1;

} 