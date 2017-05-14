
//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
class Box{
    private:
    int l,b,h;
    public:
    Box(){ l=0; b=0; h=0;}
    Box(int l, int b, int h) { this->l = l; this->b = b; this->h = h;}
    Box(const Box& b) { this->l = b.l; this->b = b.b; this->h = b.h;}
    int getLength() { return l;}
    int getBreadth() {return b;}
    int getHeight() {return h;}
    long long CalculateVolume() { return (long long)l*b*h;}
    
    bool operator<(Box& B){
        return (l < B.l || (b < B.b && l == B.l) || (l==B.l && b==B.b && h < B.h));
    }
};
ostream& operator<<(ostream& out, Box& B){
    out << B.getLength() << " " << B.getBreadth() << " " << B.getHeight();
    return out;
}
