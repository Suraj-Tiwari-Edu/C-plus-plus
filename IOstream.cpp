#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    // creating a file and writing in it

    // trunc is for truncating the file means if something in the file it will first make it empty then write
    ofstream ofs("test.txt",ios::trunc); // it is default means if u don't mention still work
    ofs<<"testing IO stream"<<endl;
    ofs.close();
    ofs.open("test.txt",ios::app); // app stands for appending something in file(writing in the last)
    ofs<<"hey"<<endl;
    ofs<<2;
    ofs.close();
    
    //reading a file

    ifstream irs("test.txt");
    if(!irs) // to check if file is opening or not
    {
        cout<<"hey";
        return 1;
    }
    int n;
    string line1,line2;
    getline(irs,line1);
    getline(irs,line2);
    irs>>n;
    irs.close();
    cout<<line1<<endl;
    cout<<line2<<endl;
    cout<<n<<endl;
}