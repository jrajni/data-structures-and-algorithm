//graph is represented by nodes nd edges
#include <iostream>
using namespace std;
int main(void){
    int t;
    cout<<"Enter no. of test cases"<<endl;
    cin>>t;
    int vertices,m,n;
    cout<<"Enter the no. of vertices"<<endl;
    cin>>vertices;
    int edges;
    cout<<"Enter the no. of edges"<<endl;
    cin>>edges;
    int arr[50][50];
    for(int i=1;i<=vertices;i++)
    {
        for(int j=1;j<=vertices;j++)
        {
            arr[i][j]=0;
        }
    }

    for(int i=0;i<edges;i++)
    {
    cin>>m>>n;
    arr[m][n]=1;
    }
    cout<<"Cases starts from here "<<endl;
    while(t--)
    {
        cin>>m>>n;
        if(arr[m][n]==1)
        {
            cout<<"exists"<<endl;
        }
        else
        {
            cout<<"doesn't exist"<<endl;
        }
    }

    /*
    for(int i=0;i<edges;i++)
    {
        for(int j=0;j<edges;j++)
        {
            if(arr[i][j]==1)
            {
                cout<<"edge exist between "<<i<<" & "<<j<<endl;
            }
        }
    }
    */

    /*
    for(int i=1;i<=vertices;i++)
    {
        for(int j=1;j<=vertices;j++)
        {
         cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */


return 0;

}

