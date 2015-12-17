#include <iostream>
#include <string>
#include "dbc.h"

using namespace std;

class Dictionary
{
private:
    string names[100];
    string emails[100];
    int size;
public:
    Dictionary()
    {
        size =0;
    }
    int getSize()
    {
        return size;
    }
    string getLastEntryName()
    {
        return names[getSize()-1];
    }
    void Add(string name,string email)
    {
        INVARIANT0(getSize() >= 0 && getSize() < 100);
        REQUIRE0(FindEntry(name) == -1);
        REQUIRE0(getSize() < 100);
        int oldSize;
        REQUIRE0(( (oldSize = getSize()) || (1) ));
        names[size] = name;
        emails[size] = email;
        size++;
        ENSURE0(name == getLastEntryName());
        ENSURE0(getSize() == oldSize + 1);
        INVARIANT0(getSize() >= 0 && getSize() < 100);
    }

    void Remove(string name)
    {
        INVARIANT0(getSize() >= 0 && getSize() < 100);
        REQUIRE0(getSize() > 0);
        REQUIRE0(FindEntry(name) < size && FindEntry(name) >= 0);
        int oldSize;
        REQUIRE0( (oldSize = getSize()) || (1) );
        // a simple example on removing array of numbers
        // if the array is  {1,5,3,4,2,6,7,8,9,10}
        // and its size is 10 elements
        // and i want to remove entry "2"
        // i'll find its index first through the function FindEntry

        int indextoberemoved = FindEntry(name);

        // then i'll move all elements after that index backword one step
        // and with decrementing the size, this is equivalent to removing that element
        size--;
        for(int i = indextoberemoved;i<size;i++)
        {
            names[i] = names[i+1];
            emails[i] = emails[i+1];
        }
        INVARIANT0(getSize() >= 0 && getSize() < 100);
        ENSURE0(getSize() == oldSize -1);

    }

   int FindEntry(string name)
   {
       INVARIANT0(getSize() >= 0 && getSize() < 100);
       for(int i =0;i<size;i++)
       {
           if(names[i] == name)
           {
               return i;
               break;
           }
       }
       return -1;
       INVARIANT0(getSize() >= 0 && getSize() < 100);

   }

    void printentries()
    {
        INVARIANT0(getSize() >= 0 && getSize() < 100);
        REQUIRE0(getSize() > 0);
        for(int i =0;i<size;i++)
        {
            cout<<"Entry #"<<i+1<<":"<<endl<<names[i]<<": "<<emails[i]<<endl;
        }
        INVARIANT0(getSize() >= 0 && getSize() < 100);
    }
};
//===========================End of class Dictionary ==============================


int main()
{


    try
        {
        Dictionary x;
        x.Add("shaza","shaza.ismail.k@gmail.com");
        x.Add("Omar","omar_amin@live.com");
        x.printentries();
        cout << "then remove" << endl;
        x.Remove("shaza");
        x.printentries();

        }
    catch(DesignByContractException & e)
        {
            cout<<(string)e;
        }




    return 0;
}
