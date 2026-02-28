Problem Description (Paragraph)
Sheela is working on a program to combine the dimensions of two images. Each image has a width and a height. She wants to add the dimensions of two images to create a new image whose width is the sum of the widths and whose height is the sum of the heights. This functionality is implemented using binary operator overloading of the + operator to combine the dimensions of two image objects.
Input Format
The first line contains two integers w1 and h1, representing the width and height of the first image.
The second line contains two integers w2 and h2, representing the width and height of the second image.
Output Format
First line prints: Image dimensions: followed by the first image dimensions in the format widthxheight
Second line prints: Image dimensions: followed by the second image dimensions in the format widthxheight
Third line prints: Image dimensions: followed by the combined image dimensions (sum of both images) in the format widthxheight
Code Constraints
1 ≤ width ≤ 1000
1 ≤ height ≤ 1000

Sample Test Case 1
Input
Copy code

200 150
300 200
Output
Copy code

Image dimensions: 200x150
Image dimensions: 300x200
Image dimensions: 500x350
Sample Test Case 2
Input
Copy code

50 60
70 80
Output
Copy code

Image dimensions: 50x60
Image dimensions: 70x80
Image dimensions: 120x140

#include <iostream>
using namespace std;

class Image {
private:
    int width;
    int height;
public:
    Image() {
        width = 0;
        height = 0;
    }

    Image(int w, int h) {
        width = w;
        height = h;
    }

    Image operator+(Image obj) {
        Image temp;
        temp.width = width + obj.width;
        temp.height = height + obj.height;
        return temp;
    }

    void display() {
        cout << "Image dimensions: " << width << "x" << height << endl;
    }
};

int main() {
    int w1, h1, w2, h2;

    cin >> w1 >> h1;
    cin >> w2 >> h2;

    Image img1(w1, h1);
    Image img2(w2, h2);

    img1.display();
    img2.display();

    Image combinedImage = img1 + img2;
    combinedImage.display();

    return 0;
}
