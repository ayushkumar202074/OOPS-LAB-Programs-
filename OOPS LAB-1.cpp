#include<iostream>


using namespace std;

 class matrix
{
    int A[1000][1000],a,b,i,j;
    public :
        void values();
        void display();
};

void matrix::values()
{
    cout << "Enter number of rows: ";
    cin >> a;
    cout << "Enter number of columns: ";
    cin >> b;
    cout << "Enter elements of matrix [A]"<<endl;
    for (i=1; i<=a; i++)
    {
        for ( j=1; j<=b; j++)
        {
            cout<<"A"<<"["<<i<<"]["<<j<<"] : ";
            cin >> A[i][j];
        }
    }
}

void matrix::display()
{
    cout<<"Elements of matrix [A]: \n";
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            cout<<" "<<A[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    matrix m;
    m.values();
    m.display();
    return 0;
}




