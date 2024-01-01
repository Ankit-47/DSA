//Program for insertion and deletion in array
#include<iostream>

using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    int p,e;
    cin>>p;
    cin>>e;
    if(p>n+1){  
        cout<<"INVALID!!";
    }
    else {
        for(i=n-1; i>=p-1; i--) {  
            arr[i+1]=arr[i];
        }
        arr[p-1]=e;
        cout<<"Array after insertion is:\n";
        for(i=0; i<n+1; i++) {  
            cout<<arr[i]<<" ";
        }
        cout.flush();
    }

    int deletep;
    cin>>deletep;
    if(deletep<1 || deletep>n+1){  
        cout<<"INVALID OUTPUT FOR DELETION";
    }
    else{
        for(i=deletep-1; i<n; i++) {
            arr[i] = arr[i+1];
        }
        cout<<"ARRAY after deletion is:\n";
        for(i=0; i<n-1; i++) {
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
