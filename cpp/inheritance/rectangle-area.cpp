
/*

Sample Input
10 5

Sample Output
10 5
50

 */
class Rectangle{
    public:
    int width, height;
    void read_input(){
        cin >> width >> height;
    }
    
    void display(){
        cout<<width<<" "<<height<<endl;
    }
};

class RectangleArea: public Rectangle{
    public:
    void display(){
        cout << width * height << endl;
    }
};

