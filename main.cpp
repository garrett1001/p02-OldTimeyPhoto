#include "bitmap.h"
#include <vector>
#include <string>

using namespace std;

int main()
{
Bitmap image;
vector <vector <Pixel> > bmp;
Pixel rgb;
//ask for file name
std::string pic;
cout<<"Enter the name of the file you want to convert"<<endl;
cin>>pic;

image.open(pic);
bool validBmp = image.isImage();

if( validBmp == true)
{
    bmp = image.toPixelMatrix();



for(int row=0; row < bmp.size(); row++)
{
    for(int col=0; col < bmp[row].size(); col++)
    {
    rgb=bmp[row][col];
    float r=rgb.red;
    float b=rgb.blue;
    float g=rgb.green;

    float grey=((r+b+g)/3);

    rgb.red=grey;
    rgb.blue=grey;
    rgb.green=grey;
    
    rgb=bmp[row][col];
    image.fromPixelMatrix(bmp);
    cout<<rgb.red<<rgb.blue<<rgb.green<<endl;
    }
}
image.save("oldtimey.bmp");
}


    return 0;
}
