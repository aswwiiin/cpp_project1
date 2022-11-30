//sorting.....bubblesort algorithm


#include<iostream>
using namespace std;

class bubbleSort
{
    public:
    int array[5];

    void read()
    {
        cout<<"Enter the numbers to be sorted \n";
        for(int i=0;i<5;i++)
        {
            cin>>array[i];
        }
    }

    void swap()
    {
        for(int j=0;j<4;j++)
        {
            for(int i=0;i<4;i++)
            {
                if(array[i]>array[i+1])
                {
                    int x;
                    x=array[i];
                    array[i]=array[i+1];
                    array[i+1]=x;
                }
            }
        }

    }
    void print()
    {
        int i;
        for(i=0;i<5;i++)
        {
            cout<<"\n"<<array[i]<<"\n";
        }

    }
};


int main()
{
    bubbleSort obj;
    obj.read();
    obj.swap();
    obj.print();
    return 0;
}
