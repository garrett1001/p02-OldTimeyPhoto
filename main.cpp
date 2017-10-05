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
image.open("machupicchu.bmp");
bmp = image.toPixelMatrix();
//find file size
cout<<"machupicchu.bmp has been loaded. It is "<<bmp[0].size()<<" pixels wide and"<<bmp.size()<<"pixels high"<<endl;
//convert file into matrix
//create loop that goes through the rows and thin one within that goes through the colomns
//change each pixel to grey by averaging the values of the rgb color
//end loop once it goes through all rows and colomns
//save as oldtimey.bmp



    return 0;
}
